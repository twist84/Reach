#pragma once
#ifndef __SIMULATION_GAME_ENTITIES_H__
#define __SIMULATION_GAME_ENTITIES_H__

/* ---------- headers */

/* ---------- constants */

enum e_simulation_entity_type
{
    _simulation_entity_type_unit = 8 ,
    _simulation_entity_type_item,
    _simulation_entity_type_generic,
    _simulation_entity_type_generic_garbage,
    _simulation_entity_type_vehicle,
    _simulation_entity_type_projectile,
    _simulation_entity_type_weapon,
    _simulation_entity_type_device,
    /* $todo confirm k_simulation_entity_type_count = 22, */
    /* $todo confirm k_simulation_entity_type_none = -1, */
    /* $todo confirm k_simulation_entity_type_first_game_engine = 0, */
    /* $todo confirm k_simulation_entity_type_last_game_engine = 9, */
    /* $todo confirm k_simulation_entity_type_bits = 5, */
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

#endif // __SIMULATION_GAME_ENTITIES_H__
