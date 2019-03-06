/*
 * namespace.h
 *
 *  Created on: Mar 28, 2018
 *      Author: dominik
 */

#ifndef INCLUDE_C_MAP_NAMESPACE_H_
#define INCLUDE_C_MAP_NAMESPACE_H_

extern u8 *map_namespaces[];

/**
 * Loads the string of a namespace to a given buffer
 * @param dst the destination of the namespace string
 * @param the namespace id
 */
void map_load_namespace(u8 *dst, u8 namespace_id);

#endif /* INCLUDE_C_MAP_NAMESPACE_H_ */
