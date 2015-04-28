  /**
 *
 * \section COPYRIGHT
 *
 * Copyright 2013-2014 The srsLTE Developers. See the
 * COPYRIGHT file at the top-level directory of this distribution.
 *
 * \section LICENSE
 *
 * This file is part of the srsLTE library.
 *
 * srsLTE is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * srsLTE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * A copy of the GNU Lesser General Public License can be found in
 * the LICENSE file in the top-level directory of this distribution
 * and at http://www.gnu.org/licenses/.
 *
 */

#include "srslte/srslte.h"
#include "queue.h"

#ifndef UESCHEDGRANT_H
#define UESCHEDGRANT_H

namespace srslte {
namespace ue {  

  /* Uplink/Downlink scheduling grant generated by a successfully decoded PDCCH */ 
  class SRSLTE_API sched_grant {
  public:
            sched_grant(uint16_t rnti_) {
              rnti = rnti_; 
            }
            uint16_t get_rnti() {
              return rnti; 
            }
    virtual uint32_t get_rv()            = 0; 
    virtual void     set_rv(uint32_t rv) = 0; 
    virtual bool     get_ndi()           = 0; 
    virtual void     set_ndi(bool value) = 0; 
    virtual bool     is_sps_release()    = 0; 
    virtual uint32_t get_tbs()           = 0; 
  protected: 
    uint16_t            rnti; 
  };
 
}
}

#endif