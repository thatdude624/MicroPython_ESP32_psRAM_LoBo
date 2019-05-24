/*
 * modlos.c
 *
 *  Created on: May 24, 2019
 *      Author: Laurens Weyn
 */

#include "sdkconfig.h"
#include "modlos.h"

#include "py/nlr.h"
#include "py/obj.h"
#include "py/runtime.h"
#include "py/binary.h"

STATIC const mp_map_elem_t los_globals_table[] = {
		{ MP_OBJ_NEW_QSTR(MP_QSTR___name__), MP_OBJ_NEW_QSTR(MP_QSTR_l_os) },
};
STATIC MP_DEFINE_CONST_DICT (
	mp_module_los_globals,
	los_globals_table
);
const mp_obj_module_t mp_module_los = {
	.base = { &mp_type_module },
	.globals = (mp_obj_dict_t*)&mp_module_los_globals,
};

