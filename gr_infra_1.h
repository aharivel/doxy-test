/**
 * @brief Defines infrastructure-related API types and constants.
 *
 * GROUT infrastructure API.
 *
 * @author Robin Jarry
 * @date 2024
 * @license BSD-3-Clause
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
 * @defgroup iface_types_1 Interface Types
 * @brief Interface type definitions
 * @{
 */

//! Undefined interface type.
#define GR_IFACE_TYPE_UNDEF 0x00

//! Physical port interface.
#define GR_IFACE_TYPE_PORT 0x01

#define GR_IFACE_TYPE_VLAN 0x02   //! VLAN-based interface.

#define GR_IFACE_TYPE_LOOPBACK 0xFF //! Loopback interface.

#define GR_IFACE_TYPE_MAX 256     //! Maximum allowed interface type.

/** @} */ // end of iface_types
#endif /* _GR_INFRA_API */

