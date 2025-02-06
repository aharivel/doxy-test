/**
 * @file gr_infra_api.h
 * @brief Defines API constants for GR infrastructure.
 */

#ifndef _GR_INFRA_API
#define _GR_INFRA_API

#include <gr_api.h>
#include <gr_bitops.h>
#include <gr_macro.h>
#include <gr_net_types.h>

#include <assert.h>
#include <sched.h>
#include <stdint.h>
#include <sys/types.h>

/**
 * @brief Undefined interface type.
 *
 * This type is used when an interface type has not been assigned.
 */
#define GR_IFACE_TYPE_UNDEF 0x00

/**
 * @brief Physical port interface.
 *
 * Used for physical network interfaces such as Ethernet ports.
 */
#define GR_IFACE_TYPE_PORT 0x01

/**
 * @brief VLAN interface.
 *
 * Used for logical interfaces associated with VLANs.
 */
#define GR_IFACE_TYPE_VLAN 0x02

/**
 * @brief Loopback interface.
 *
 * This type represents an internal software-based interface.
 */
#define GR_IFACE_TYPE_LOOPBACK 0xFF

/**
 * @brief Maximum allowed interface type value.
 *
 * Used as an upper bound for interface type validation.
 */
#define GR_IFACE_TYPE_MAX 256

#endif /* _GR_INFRA_API */

