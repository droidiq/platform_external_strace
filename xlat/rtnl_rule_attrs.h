/* Generated by ./xlat/gen.sh from ./xlat/rtnl_rule_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FRA_UNSPEC) || (defined(HAVE_DECL_FRA_UNSPEC) && HAVE_DECL_FRA_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_UNSPEC) == (0), "FRA_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_UNSPEC 0
#endif
#if defined(FRA_DST) || (defined(HAVE_DECL_FRA_DST) && HAVE_DECL_FRA_DST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_DST) == (1), "FRA_DST != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_DST 1
#endif
#if defined(FRA_SRC) || (defined(HAVE_DECL_FRA_SRC) && HAVE_DECL_FRA_SRC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_SRC) == (2), "FRA_SRC != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_SRC 2
#endif
#if defined(FRA_IIFNAME) || (defined(HAVE_DECL_FRA_IIFNAME) && HAVE_DECL_FRA_IIFNAME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_IIFNAME) == (3), "FRA_IIFNAME != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_IIFNAME 3
#endif
#if defined(FRA_GOTO) || (defined(HAVE_DECL_FRA_GOTO) && HAVE_DECL_FRA_GOTO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_GOTO) == (4), "FRA_GOTO != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_GOTO 4
#endif
#if defined(FRA_UNUSED2) || (defined(HAVE_DECL_FRA_UNUSED2) && HAVE_DECL_FRA_UNUSED2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_UNUSED2) == (5), "FRA_UNUSED2 != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_UNUSED2 5
#endif
#if defined(FRA_PRIORITY) || (defined(HAVE_DECL_FRA_PRIORITY) && HAVE_DECL_FRA_PRIORITY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_PRIORITY) == (6), "FRA_PRIORITY != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_PRIORITY 6
#endif
#if defined(FRA_UNUSED3) || (defined(HAVE_DECL_FRA_UNUSED3) && HAVE_DECL_FRA_UNUSED3)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_UNUSED3) == (7), "FRA_UNUSED3 != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_UNUSED3 7
#endif
#if defined(FRA_UNUSED4) || (defined(HAVE_DECL_FRA_UNUSED4) && HAVE_DECL_FRA_UNUSED4)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_UNUSED4) == (8), "FRA_UNUSED4 != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_UNUSED4 8
#endif
#if defined(FRA_UNUSED5) || (defined(HAVE_DECL_FRA_UNUSED5) && HAVE_DECL_FRA_UNUSED5)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_UNUSED5) == (9), "FRA_UNUSED5 != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_UNUSED5 9
#endif
#if defined(FRA_FWMARK) || (defined(HAVE_DECL_FRA_FWMARK) && HAVE_DECL_FRA_FWMARK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_FWMARK) == (10), "FRA_FWMARK != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_FWMARK 10
#endif
#if defined(FRA_FLOW) || (defined(HAVE_DECL_FRA_FLOW) && HAVE_DECL_FRA_FLOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_FLOW) == (11), "FRA_FLOW != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_FLOW 11
#endif
#if defined(FRA_TUN_ID) || (defined(HAVE_DECL_FRA_TUN_ID) && HAVE_DECL_FRA_TUN_ID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_TUN_ID) == (12), "FRA_TUN_ID != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_TUN_ID 12
#endif
#if defined(FRA_SUPPRESS_IFGROUP) || (defined(HAVE_DECL_FRA_SUPPRESS_IFGROUP) && HAVE_DECL_FRA_SUPPRESS_IFGROUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_SUPPRESS_IFGROUP) == (13), "FRA_SUPPRESS_IFGROUP != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_SUPPRESS_IFGROUP 13
#endif
#if defined(FRA_SUPPRESS_PREFIXLEN) || (defined(HAVE_DECL_FRA_SUPPRESS_PREFIXLEN) && HAVE_DECL_FRA_SUPPRESS_PREFIXLEN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_SUPPRESS_PREFIXLEN) == (14), "FRA_SUPPRESS_PREFIXLEN != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_SUPPRESS_PREFIXLEN 14
#endif
#if defined(FRA_TABLE) || (defined(HAVE_DECL_FRA_TABLE) && HAVE_DECL_FRA_TABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_TABLE) == (15), "FRA_TABLE != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_TABLE 15
#endif
#if defined(FRA_FWMASK) || (defined(HAVE_DECL_FRA_FWMASK) && HAVE_DECL_FRA_FWMASK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_FWMASK) == (16), "FRA_FWMASK != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_FWMASK 16
#endif
#if defined(FRA_OIFNAME) || (defined(HAVE_DECL_FRA_OIFNAME) && HAVE_DECL_FRA_OIFNAME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_OIFNAME) == (17), "FRA_OIFNAME != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_OIFNAME 17
#endif
#if defined(FRA_PAD) || (defined(HAVE_DECL_FRA_PAD) && HAVE_DECL_FRA_PAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_PAD) == (18), "FRA_PAD != 18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_PAD 18
#endif
#if defined(FRA_L3MDEV) || (defined(HAVE_DECL_FRA_L3MDEV) && HAVE_DECL_FRA_L3MDEV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_L3MDEV) == (19), "FRA_L3MDEV != 19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_L3MDEV 19
#endif
#if defined(FRA_UID_RANGE) || (defined(HAVE_DECL_FRA_UID_RANGE) && HAVE_DECL_FRA_UID_RANGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_UID_RANGE) == (20), "FRA_UID_RANGE != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_UID_RANGE 20
#endif
#if defined(FRA_PROTOCOL) || (defined(HAVE_DECL_FRA_PROTOCOL) && HAVE_DECL_FRA_PROTOCOL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_PROTOCOL) == (21), "FRA_PROTOCOL != 21");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_PROTOCOL 21
#endif
#if defined(FRA_IP_PROTO) || (defined(HAVE_DECL_FRA_IP_PROTO) && HAVE_DECL_FRA_IP_PROTO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_IP_PROTO) == (22), "FRA_IP_PROTO != 22");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_IP_PROTO 22
#endif
#if defined(FRA_SPORT_RANGE) || (defined(HAVE_DECL_FRA_SPORT_RANGE) && HAVE_DECL_FRA_SPORT_RANGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_SPORT_RANGE) == (23), "FRA_SPORT_RANGE != 23");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_SPORT_RANGE 23
#endif
#if defined(FRA_DPORT_RANGE) || (defined(HAVE_DECL_FRA_DPORT_RANGE) && HAVE_DECL_FRA_DPORT_RANGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FRA_DPORT_RANGE) == (24), "FRA_DPORT_RANGE != 24");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FRA_DPORT_RANGE 24
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_rule_attrs in mpers mode

# else

static
const struct xlat rtnl_rule_attrs[] = {
 XLAT(FRA_UNSPEC),
 XLAT(FRA_DST),
 XLAT(FRA_SRC),
 XLAT(FRA_IIFNAME),
 XLAT(FRA_GOTO),
 XLAT(FRA_UNUSED2),
 XLAT(FRA_PRIORITY),
 XLAT(FRA_UNUSED3),
 XLAT(FRA_UNUSED4),
 XLAT(FRA_UNUSED5),
 XLAT(FRA_FWMARK),
 XLAT(FRA_FLOW),
 XLAT(FRA_TUN_ID),
 XLAT(FRA_SUPPRESS_IFGROUP),
 XLAT(FRA_SUPPRESS_PREFIXLEN),
 XLAT(FRA_TABLE),
 XLAT(FRA_FWMASK),
 XLAT(FRA_OIFNAME),
 XLAT(FRA_PAD),
 XLAT(FRA_L3MDEV),
 XLAT(FRA_UID_RANGE),
 XLAT(FRA_PROTOCOL),
 XLAT(FRA_IP_PROTO),
 XLAT(FRA_SPORT_RANGE),
 XLAT(FRA_DPORT_RANGE),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
