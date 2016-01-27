#ifndef EXPERIMENTALDELTASOLUTION_H
#define EXPERIMENTALDELTASOLUTION_H
#include "libs/Module.h"
#include "BaseSolution.h"

class Config;

class ExperimentalDeltaSolution : public BaseSolution {
    public:
        ExperimentalDeltaSolution(Config*);
        void cartesian_to_actuator(const float[], ActuatorCoordinates &) override;
        void actuator_to_cartesian(const ActuatorCoordinates &, float[] ) override;

        bool set_optional(const arm_options_t& options) override;
        bool get_optional(arm_options_t& options, bool force_all) override;

    private:
        void init();

        float arm_length;
        float arm_radius;
        float arm_radius_back;
        float arm_length_squared;

        float delta_tower1_x;
        float delta_tower1_y;
        float delta_tower2_x;
        float delta_tower2_y;
        float delta_tower3_x;
        float delta_tower3_y;
};
#endif // ExperimentalDeltaSolution_H