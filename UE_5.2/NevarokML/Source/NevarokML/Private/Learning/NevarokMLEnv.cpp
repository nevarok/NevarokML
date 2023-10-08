/*  COPYRIGHT NOTICE
 *  ----------------
 *  This file contains intellectual property owned by Kyrylo Mishakin.
 *  See the LICENSE file or refer to the header file for the full license agreement.
 *  LICENSE file is also available at https://github.com/nevarok/NevarokML/blob/main/LICENSE
 */

#include "Learning/NevarokMLEnv.h"
#include "Samples/NevarokMLSample.h"

void ANevarokMLEnv::OnInit_Implementation(UNevarokMLSpace* actionSpace, UNevarokMLSpace* observationSpace, bool simulate)
{
}

void ANevarokMLEnv::OnStep_Implementation(bool simulate)
{
}

void ANevarokMLEnv::OnStepSkip_Implementation(bool simulate)
{
}

void ANevarokMLEnv::OnReset_Implementation(bool simulate)
{
}

void ANevarokMLEnv::ExecuteInit(UNevarokMLSpace* actionSpace, UNevarokMLSpace* observationSpace, bool simulate)
{
    _actionSample = UNevarokMLSample::Sample(actionSpace);
    _observationSample = UNevarokMLSample::Sample(observationSpace);
    _maxEpisodeReward = -TNumericLimits<float>().Max();
    _episodes = -1;
    
    OnInit(actionSpace, observationSpace, simulate);
}

void ANevarokMLEnv::ExecuteStep(bool simulate)
{
    _steps++;
    _reward = 0.0f;
    
    OnStep(simulate);
    
    _episodeReward += _reward;
}

void ANevarokMLEnv::ExecuteStepSkip(bool simulate)
{
    OnStepSkip(simulate);
}

void ANevarokMLEnv::ExecuteReset(bool simulate)
{
    OnReset(simulate);

    _maxEpisodeReward = FMath::Max(_maxEpisodeReward, _episodeReward);

    _episodes++;
    
    _done = false;
    _steps = 0;
    _episodeReward = 0.0f;
}
