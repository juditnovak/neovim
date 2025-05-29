#pragma once

#include <unibilium.h>  // IWYU pragma: keep

#include "nvim/api/private/defs.h"  // IWYU pragma: keep
#include "nvim/tui/tui_defs.h"  
                                    //

#ifdef USE_UNIBI
  typedef const char tdata_raw;
#else
  typedef struct terminfo_data tdata_raw;
#endif


#ifdef INCLUDE_GENERATED_DECLARATIONS
# include "tui/terminfo.h.generated.h"
#endif
