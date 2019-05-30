#include "core/reaction.hpp"

#include <cstddef>

/*

Define each reaction's reactants and products in `reaction_deltas.hpp`.
Say a reaction enumerated as `R_ONE` has the following chemical formula:

                           2A + B --> C

The proper way to define that reaction's state change vector is as follows:
        
        STATIC_VAR int num_deltas_R_ONE = 3;
        STATIC_VAR int deltas_R_ONE[] = {-2, -1, 1};
        STATIC_VAR specie_id delta_ids_R_ONE[] = {A, B, C};

*/

STATIC_VAR int num_deltas_fe2_reaction = 4;
STATIC_VAR int deltas_fe2_reaction[] = {-2, -1, 2, 2};
STATIC_VAR specie_id delta_ids_fe2_reaction[] = {FE2, HBRO, FE3, HBRO};

STATIC_VAR int num_deltas_fe3_reaction = 3;
STATIC_VAR int deltas_fe3_reaction[] = {-4, 1,4};
STATIC_VAR specie_id delta_ids_fe3_reaction[] = {FE3,FE2,BR};

STATIC_VAR int num_deltas_br_synthesis = 1;
STATIC_VAR int deltas_br_synthesis[] = {1};
STATIC_VAR specie_id delta_ids_br_synthesis[] = {BR};


STATIC_VAR int num_deltas_br_to_hbro = 3;
STATIC_VAR int deltas_br_to_hbro[] = {-1,1,1};
STATIC_VAR specie_id delta_ids_br_to_hbro[] = {BR,HBRO, FE2};

STATIC_VAR int num_deltas_br_decay = 1;
STATIC_VAR int deltas_br_decay[] = {-1};
STATIC_VAR specie_id delta_ids_br_decay[] = {BR};


