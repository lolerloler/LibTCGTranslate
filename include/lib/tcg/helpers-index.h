#include "lib/tcg/helper-head.h"

#define DEF_HELPER_FLAGS_0(NAME, FLAGS, ret)  HELPER_IDX(NAME),

#define DEF_HELPER_FLAGS_0v DEF_HELPER_FLAGS_0

#define DEF_HELPER_FLAGS_1(NAME, FLAGS, ret, t1) HELPER_IDX(NAME),

#define DEF_HELPER_FLAGS_1v DEF_HELPER_FLAGS_1

#define DEF_HELPER_FLAGS_2(NAME, FLAGS, ret, t1, t2) HELPER_IDX(NAME),

#define DEF_HELPER_FLAGS_2v DEF_HELPER_FLAGS_2

#define DEF_HELPER_FLAGS_3(NAME, FLAGS, ret, t1, t2, t3) HELPER_IDX(NAME),

#define DEF_HELPER_FLAGS_3v DEF_HELPER_FLAGS_3

#define DEF_HELPER_FLAGS_4(NAME, FLAGS, ret, t1, t2, t3, t4) HELPER_IDX(NAME),

#define DEF_HELPER_FLAGS_4v DEF_HELPER_FLAGS_4

#define DEF_HELPER_FLAGS_5(NAME, FLAGS, ret, t1, t2, t3, t4, t5) HELPER_IDX(NAME),

#define DEF_HELPER_FLAGS_5v DEF_HELPER_FLAGS_5

#include "lib/tcg/helpers.h"

#undef DEF_HELPER_FLAGS_0

#undef DEF_HELPER_FLAGS_0v

#undef DEF_HELPER_FLAGS_1

#undef DEF_HELPER_FLAGS_1v

#undef DEF_HELPER_FLAGS_2

#undef DEF_HELPER_FLAGS_2v

#undef DEF_HELPER_FLAGS_3

#undef DEF_HELPER_FLAGS_3v

#undef DEF_HELPER_FLAGS_4

#undef DEF_HELPER_FLAGS_4v

#undef DEF_HELPER_FLAGS_5

#undef DEF_HELPER_FLAGS_5v
