/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Models/NevarokMLBaseAlgorithm.h"
#include "Data/NevarokMLDataLibrary.h"
#include "Dom/JsonObject.h"

UNevarokMLBaseAlgorithm* UNevarokMLBaseAlgorithm::PPO(UObject* owner,
                                                      const ENevarokMLPolicy policy,
                                                      const float learningRate,
                                                      const int nSteps,
                                                      const int batchSize,
                                                      const int nEpochs,
                                                      const float gamma,
                                                      const float gaeLambda,
                                                      const float clipRange,
                                                      const float entCoef,
                                                      const float vfCoef,
                                                      const float maxGradNorm,
                                                      const bool useSde,
                                                      const int sdeSampleFreq,
                                                      const int verbose)
{
    const auto result = owner ? NewObject<UNevarokMLBaseAlgorithm>(owner) : NewObject<UNevarokMLBaseAlgorithm>();

    result->_algorithm = ENevarokMLAlgorithm::PPO;
    result->_policy = policy;
    result->_learningRate = learningRate;
    result->_nSteps = nSteps;
    result->_batchSize = batchSize;
    result->_nEpochs = nEpochs;
    result->_gamma = gamma;
    result->_gaeLambda = gaeLambda;
    result->_clipRange = clipRange;
    result->_entCoef = entCoef;
    result->_vfCoef = vfCoef;
    result->_maxGradNorm = maxGradNorm;
    result->_useSde = useSde;
    result->_sdeSampleFreq = sdeSampleFreq;
    result->_verbose = verbose;

    return result;
}

UNevarokMLBaseAlgorithm* UNevarokMLBaseAlgorithm::A2C(UObject* owner,
                                                      const ENevarokMLPolicy policy,
                                                      const float learningRate,
                                                      const int nSteps,
                                                      const float gamma,
                                                      const float gaeLambda,
                                                      const float entCoef,
                                                      const float vfCoef,
                                                      const float maxGradNorm,
                                                      const float rmsPropEps,
                                                      const bool useRmsProp,
                                                      const bool useSde,
                                                      const int sdeSampleFreq,
                                                      const bool normalizeAdvantage,
                                                      const int verbose)
{
    const auto result = owner ? NewObject<UNevarokMLBaseAlgorithm>(owner) : NewObject<UNevarokMLBaseAlgorithm>();

    result->_algorithm = ENevarokMLAlgorithm::A2C;
    result->_policy = policy;
    result->_learningRate = learningRate;
    result->_nSteps = nSteps;
    result->_gamma = gamma;
    result->_gaeLambda = gaeLambda;
    result->_entCoef = entCoef;
    result->_vfCoef = vfCoef;
    result->_maxGradNorm = maxGradNorm;
    result->_rmsPropEps = rmsPropEps;
    result->_useRmsProp = useRmsProp;
    result->_useSde = useSde;
    result->_sdeSampleFreq = sdeSampleFreq;
    result->_normalizeAdvantage = normalizeAdvantage;
    result->_verbose = verbose;

    return result;
}


UNevarokMLBaseAlgorithm* UNevarokMLBaseAlgorithm::DDPG(UObject* owner,
                                                       const ENevarokMLPolicy policy,
                                                       const float learningRate,
                                                       const int bufferSize,
                                                       const int learningStarts,
                                                       const int batchSize,
                                                       const float tau,
                                                       const float gamma,
                                                       const int trainFreq,
                                                       const int gradientSteps,
                                                       const bool optimizeMemoryUsage,
                                                       const int verbose)
{
    const auto result = owner ? NewObject<UNevarokMLBaseAlgorithm>(owner) : NewObject<UNevarokMLBaseAlgorithm>();

    result->_algorithm = ENevarokMLAlgorithm::DDPG;
    result->_policy = policy;
    result->_learningRate = learningRate;
    result->_bufferSize = bufferSize;
    result->_learningStarts = learningStarts;
    result->_batchSize = batchSize;
    result->_tau = tau;
    result->_gamma = gamma;
    result->_trainFreq = trainFreq;
    result->_gradientSteps = gradientSteps;
    result->_optimizeMemoryUsage = optimizeMemoryUsage;
    result->_verbose = verbose;

    return result;
}


UNevarokMLBaseAlgorithm* UNevarokMLBaseAlgorithm::DQN(UObject* owner,
                                                      const ENevarokMLPolicy policy,
                                                      const float learningRate,
                                                      const int bufferSize,
                                                      const int learningStarts,
                                                      const int batchSize,
                                                      const float tau,
                                                      const float gamma,
                                                      const int trainFreq,
                                                      const int gradientSteps,
                                                      const bool optimizeMemoryUsage,
                                                      const int targetUpdateInterval,
                                                      const float explorationFraction,
                                                      const float explorationInitialEps,
                                                      const float explorationFinalEps,
                                                      const float maxGradNorm,
                                                      const int verbose)
{
    const auto result = owner ? NewObject<UNevarokMLBaseAlgorithm>(owner) : NewObject<UNevarokMLBaseAlgorithm>();

    result->_algorithm = ENevarokMLAlgorithm::DQN;
    result->_policy = policy;
    result->_learningRate = learningRate;
    result->_bufferSize = bufferSize;
    result->_learningStarts = learningStarts;
    result->_batchSize = batchSize;
    result->_tau = tau;
    result->_gamma = gamma;
    result->_trainFreq = trainFreq;
    result->_gradientSteps = gradientSteps;
    result->_optimizeMemoryUsage = optimizeMemoryUsage;
    result->_targetUpdateInterval = targetUpdateInterval;
    result->_explorationFraction = explorationFraction;
    result->_explorationInitialEps = explorationInitialEps;
    result->_explorationFinalEps = explorationFinalEps;
    result->_maxGradNorm = maxGradNorm;
    result->_verbose = verbose;

    return result;
}


UNevarokMLBaseAlgorithm* UNevarokMLBaseAlgorithm::SAC(UObject* owner,
                                                      const ENevarokMLPolicy policy,
                                                      const float learningRate,
                                                      const int bufferSize,
                                                      const int learningStarts,
                                                      const int batchSize,
                                                      const float tau,
                                                      const float gamma,
                                                      const int trainFreq,
                                                      const int gradientSteps,
                                                      const bool optimizeMemoryUsage,
                                                      const bool entCoefAuto,
                                                      const float entCoef,
                                                      const int targetUpdateInterval,
                                                      const bool targetEntropyAuto,
                                                      const float targetEntropy,
                                                      const bool useSde,
                                                      const int sdeSampleFreq,
                                                      const bool useSdeAtWarmup,
                                                      const int verbose)
{
    const auto result = owner ? NewObject<UNevarokMLBaseAlgorithm>(owner) : NewObject<UNevarokMLBaseAlgorithm>();

    result->_algorithm = ENevarokMLAlgorithm::SAC;
    result->_policy = policy;
    result->_learningRate = learningRate;
    result->_bufferSize = bufferSize;
    result->_learningStarts = learningStarts;
    result->_batchSize = batchSize;
    result->_tau = tau;
    result->_gamma = gamma;
    result->_trainFreq = trainFreq;
    result->_gradientSteps = gradientSteps;
    result->_optimizeMemoryUsage = optimizeMemoryUsage;
    result->_entCoefAuto = entCoefAuto;
    result->_entCoef = entCoef;
    result->_targetUpdateInterval = targetUpdateInterval;
    result->_targetEntropyAuto = targetEntropyAuto;
    result->_targetEntropy = targetEntropy;
    result->_useSde = useSde;
    result->_sdeSampleFreq = sdeSampleFreq;
    result->_useSdeAtWarmup = useSdeAtWarmup;
    result->_verbose = verbose;

    return result;
}


UNevarokMLBaseAlgorithm* UNevarokMLBaseAlgorithm::TD3(UObject* owner,
                                                      const ENevarokMLPolicy policy,
                                                      const float learningRate,
                                                      const int bufferSize,
                                                      const int learningStarts,
                                                      const int batchSize,
                                                      const float tau,
                                                      const float gamma,
                                                      const int trainFreq,
                                                      const int gradientSteps,
                                                      const bool optimizeMemoryUsage,
                                                      const int policyDelay,
                                                      const float targetPolicyNoise,
                                                      const float targetNoiseClip,
                                                      const int verbose)
{
    const auto result = owner ? NewObject<UNevarokMLBaseAlgorithm>(owner) : NewObject<UNevarokMLBaseAlgorithm>();

    result->_algorithm = ENevarokMLAlgorithm::TD3;
    result->_policy = policy;
    result->_learningRate = learningRate;
    result->_bufferSize = bufferSize;
    result->_learningStarts = learningStarts;
    result->_batchSize = batchSize;
    result->_tau = tau;
    result->_gamma = gamma;
    result->_trainFreq = trainFreq;
    result->_gradientSteps = gradientSteps;
    result->_optimizeMemoryUsage = optimizeMemoryUsage;
    result->_policyDelay = policyDelay;
    result->_targetPolicyNoise = targetPolicyNoise;
    result->_targetNoiseClip = targetNoiseClip;
    result->_verbose = verbose;

    return result;
}

TSharedPtr<FJsonObject> UNevarokMLBaseAlgorithm::ToJson() const
{
    const TSharedPtr<FJsonObject> jsonObject = MakeShareable(new FJsonObject);

    switch (_algorithm)
    {
    case ENevarokMLAlgorithm::PPO:
        jsonObject->SetNumberField("learning_rate", _learningRate);
        jsonObject->SetNumberField("n_steps", _nSteps);
        jsonObject->SetNumberField("batch_size", _batchSize);
        jsonObject->SetNumberField("n_epochs", _nEpochs);
        jsonObject->SetNumberField("gamma", _gamma);
        jsonObject->SetNumberField("gae_lambda", _gaeLambda);
        jsonObject->SetNumberField("clip_range", _clipRange);
        jsonObject->SetNumberField("ent_coef", _entCoef);
        jsonObject->SetNumberField("vf_coef", _vfCoef);
        jsonObject->SetNumberField("max_grad_norm", _maxGradNorm);
        jsonObject->SetNumberField("use_sde", _useSde);
        jsonObject->SetNumberField("sde_sample_freq", _sdeSampleFreq);
        jsonObject->SetNumberField("verbose", _verbose);
        break;
    case ENevarokMLAlgorithm::A2C:
        jsonObject->SetNumberField("learning_rate", _learningRate);
        jsonObject->SetNumberField("n_steps", _nSteps);
        jsonObject->SetNumberField("gamma", _gamma);
        jsonObject->SetNumberField("gae_lambda", _gaeLambda);
        jsonObject->SetNumberField("ent_coef", _entCoef);
        jsonObject->SetNumberField("vf_coef", _vfCoef);
        jsonObject->SetNumberField("max_grad_norm", _maxGradNorm);
        jsonObject->SetNumberField("rms_prop_eps", _rmsPropEps);
        jsonObject->SetNumberField("use_rms_prop", _useRmsProp);
        jsonObject->SetNumberField("use_sde", _useSde);
        jsonObject->SetNumberField("sde_sample_freq", _sdeSampleFreq);
        jsonObject->SetNumberField("normalize_advantage", _normalizeAdvantage);
        jsonObject->SetNumberField("verbose", _verbose);
        break;
    case ENevarokMLAlgorithm::DDPG:
        jsonObject->SetNumberField("learning_rate", _learningRate);
        jsonObject->SetNumberField("buffer_size", _bufferSize);
        jsonObject->SetNumberField("learning_starts", _learningStarts);
        jsonObject->SetNumberField("batch_size", _batchSize);
        jsonObject->SetNumberField("tau", _tau);
        jsonObject->SetNumberField("gamma", _gamma);
        jsonObject->SetNumberField("train_freq", _trainFreq);
        jsonObject->SetNumberField("gradient_steps", _gradientSteps);
        jsonObject->SetNumberField("optimize_memory_usage", _optimizeMemoryUsage);
        jsonObject->SetNumberField("verbose", _verbose);
        break;
    case ENevarokMLAlgorithm::DQN:
        jsonObject->SetNumberField("learning_rate", _learningRate);
        jsonObject->SetNumberField("buffer_size", _bufferSize);
        jsonObject->SetNumberField("learning_starts", _learningStarts);
        jsonObject->SetNumberField("batch_size", _batchSize);
        jsonObject->SetNumberField("tau", _tau);
        jsonObject->SetNumberField("gamma", _gamma);
        jsonObject->SetNumberField("train_freq", _trainFreq);
        jsonObject->SetNumberField("gradient_steps", _gradientSteps);
        jsonObject->SetNumberField("optimize_memory_usage", _optimizeMemoryUsage);
        jsonObject->SetNumberField("target_update_interval", _targetUpdateInterval);
        jsonObject->SetNumberField("exploration_fraction", _explorationFraction);
        jsonObject->SetNumberField("exploration_initial_eps", _explorationInitialEps);
        jsonObject->SetNumberField("exploration_final_eps", _explorationFinalEps);
        jsonObject->SetNumberField("max_grad_norm", _maxGradNorm);
        jsonObject->SetNumberField("verbose", _verbose);
    case ENevarokMLAlgorithm::SAC:
        jsonObject->SetNumberField("learning_rate", _learningRate);
        jsonObject->SetNumberField("buffer_size", _bufferSize);
        jsonObject->SetNumberField("learning_starts", _learningStarts);
        jsonObject->SetNumberField("batch_size", _batchSize);
        jsonObject->SetNumberField("tau", _tau);
        jsonObject->SetNumberField("gamma", _gamma);
        jsonObject->SetNumberField("train_freq", _trainFreq);
        jsonObject->SetNumberField("gradient_steps", _gradientSteps);
        jsonObject->SetNumberField("optimize_memory_usage", _optimizeMemoryUsage);
        jsonObject->SetNumberField("ent_coef_auto", _entCoefAuto);
        jsonObject->SetNumberField("ent_coef", _entCoef);
        jsonObject->SetNumberField("target_update_interval", _targetUpdateInterval);
        jsonObject->SetNumberField("target_entropy_auto", _targetEntropyAuto);
        jsonObject->SetNumberField("target_entropy", _targetEntropy);
        jsonObject->SetNumberField("use_sde", _useSde);
        jsonObject->SetNumberField("sde_sample_freq", _sdeSampleFreq);
        jsonObject->SetNumberField("use_sde_at_warmup", _useSdeAtWarmup);
        jsonObject->SetNumberField("verbose", _verbose);
        break;
    case ENevarokMLAlgorithm::TD3:
        jsonObject->SetNumberField("learning_rate", _learningRate);
        jsonObject->SetNumberField("buffer_size", _bufferSize);
        jsonObject->SetNumberField("learning_starts", _learningStarts);
        jsonObject->SetNumberField("batch_size", _batchSize);
        jsonObject->SetNumberField("tau", _tau);
        jsonObject->SetNumberField("gamma", _gamma);
        jsonObject->SetNumberField("train_freq", _trainFreq);
        jsonObject->SetNumberField("gradient_steps", _gradientSteps);
        jsonObject->SetNumberField("optimize_memory_usage", _optimizeMemoryUsage);
        jsonObject->SetNumberField("policy_delay", _policyDelay);
        jsonObject->SetNumberField("target_policy_noise", _targetPolicyNoise);
        jsonObject->SetNumberField("target_noise_clip", _targetNoiseClip);
        jsonObject->SetNumberField("verbose", _verbose);
        break;
    }

    return jsonObject;
}
