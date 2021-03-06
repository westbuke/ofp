/*-
 * Copyright (c) 2014 ENEA Software AB
 * Copyright (c) 2014 Nokia
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */

#include "ofpi_log.h"

#ifdef OFP_DEBUG
enum ofp_log_level_s ofp_loglevel = OFP_LOG_DEBUG;
#else
enum ofp_log_level_s ofp_loglevel = OFP_LOG_INFO;
#endif
