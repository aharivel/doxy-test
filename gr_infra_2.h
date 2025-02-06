/**
 * @brief Infrastructure API constants and types.
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
 * @defgroup iface_types_2 Interface Types
 * @brief Defines different interface types.
 * @{
 */

/** @brief Undefined interface type. */
#define GR_IFACE_TYPE_UNDEF 0x00

/** @brief Represents a physical port interface. */
#define GR_IFACE_TYPE_PORT 0x01

/** @brief Represents a VLAN-based interface. */
#define GR_IFACE_TYPE_VLAN 0x02

/** @brief Represents a loopback interface. */
#define GR_IFACE_TYPE_LOOPBACK 0xFF

/** @brief Maximum allowed interface type value. */
#define GR_IFACE_TYPE_MAX 256

/** @} */ // end of iface_types

#endif /* _GR_INFRA_API */

