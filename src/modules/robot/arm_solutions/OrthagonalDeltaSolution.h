#ifndef ORTHAGONALDELTASOLUTION_H
#define ORTHAGONALDELTASOLUTION_H
#include "libs/Module.h"
#include "BaseSolution.h"

class Config;

class OrthagonalDeltaSolution : public BaseSolution {
    public:
        OrthagonalDeltaSolution(Config*);
        void cartesian_to_actuator( float[], float[] );
        void actuator_to_cartesian( float[], float[] );

        bool set_optional(const arm_options_t& options);
        bool get_optional(arm_options_t& options);

    private:
        void init();

        float arm_length;
        float arm_radius;
        float arm_length_squared;

        float DELTA_TOWER1_X;
        float DELTA_TOWER1_Y;
        float DELTA_TOWER2_X;
        float DELTA_TOWER2_Y;
        float DELTA_TOWER3_X;
        float DELTA_TOWER3_Y;
};
#endif // ORTHAGONALDELTASOLUTION_H
