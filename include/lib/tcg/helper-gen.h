#ifndef _HELPER_GEN_H
#define _HELPER_GEN_H

#include "lib/tcg/helper-head.h"

#define DEF_HELPER_FLAGS_0(name, flags, ret)                            \
static inline void glue(gen_helper_, name)(TCGContext *s, dh_retvar_decl0(ret)) \
{                                                                       \
  tcg_gen_callN(s, TCGHelpersIndex::HELPER_IDX(name), dh_retvar(ret), 0, NULL); \
}

#define DEF_HELPER_FLAGS_0v DEF_HELPER_FLAGS_0

#define DEF_HELPER_FLAGS_1(name, flags, ret, t1)                        \
static inline void glue(gen_helper_, name)(TCGContext *s, dh_retvar_decl(ret) \
    dh_arg_decl(t1, 1))                                                 \
{                                                                       \
  TCGArg args[1] = { dh_arg(t1, 1) };                                   \
  tcg_gen_callN(s, TCGHelpersIndex::HELPER_IDX(name), dh_retvar(ret), 1, args); \
}

#define DEF_HELPER_FLAGS_1v DEF_HELPER_FLAGS_1

#define DEF_HELPER_FLAGS_2(name, flags, ret, t1, t2)                    \
static inline void glue(gen_helper_, name)(TCGContext *s, dh_retvar_decl(ret) \
    dh_arg_decl(t1, 1), dh_arg_decl(t2, 2))                             \
{                                                                       \
  TCGArg args[2] = { dh_arg(t1, 1), dh_arg(t2, 2) };                    \
  tcg_gen_callN(s, TCGHelpersIndex::HELPER_IDX(name), dh_retvar(ret), 2, args); \
}

#define DEF_HELPER_FLAGS_2v DEF_HELPER_FLAGS_2 

#define DEF_HELPER_FLAGS_3(name, flags, ret, t1, t2, t3)                \
static inline void glue(gen_helper_, name)(TCGContext *s, dh_retvar_decl(ret) \
    dh_arg_decl(t1, 1), dh_arg_decl(t2, 2), dh_arg_decl(t3, 3))         \
{                                                                       \
  TCGArg args[3] = { dh_arg(t1, 1), dh_arg(t2, 2), dh_arg(t3, 3) };     \
  tcg_gen_callN(s, TCGHelpersIndex::HELPER_IDX(name), dh_retvar(ret), 3, args); \
}

#define DEF_HELPER_FLAGS_3v DEF_HELPER_FLAGS_3 

#define DEF_HELPER_FLAGS_4(name, flags, ret, t1, t2, t3, t4)            \
static inline void glue(gen_helper_, name)(TCGContext *s, dh_retvar_decl(ret) \
    dh_arg_decl(t1, 1), dh_arg_decl(t2, 2),                             \
    dh_arg_decl(t3, 3), dh_arg_decl(t4, 4))                             \
{                                                                       \
  TCGArg args[4] = { dh_arg(t1, 1), dh_arg(t2, 2),                      \
                     dh_arg(t3, 3), dh_arg(t4, 4) };                    \
  tcg_gen_callN(s, TCGHelpersIndex::HELPER_IDX(name), dh_retvar(ret), 4, args); \
}

#define DEF_HELPER_FLAGS_4v DEF_HELPER_FLAGS_4

#define DEF_HELPER_FLAGS_5(name, flags, ret, t1, t2, t3, t4, t5)        \
static inline void glue(gen_helper_, name)(TCGContext *s, dh_retvar_decl(ret) \
    dh_arg_decl(t1, 1),  dh_arg_decl(t2, 2), dh_arg_decl(t3, 3),        \
    dh_arg_decl(t4, 4), dh_arg_decl(t5, 5))                             \
{                                                                       \
  TCGArg args[5] = { dh_arg(t1, 1), dh_arg(t2, 2), dh_arg(t3, 3),       \
                     dh_arg(t4, 4), dh_arg(t5, 5) };                    \
  tcg_gen_callN(s, TCGHelpersIndex::HELPER_IDX(name), dh_retvar(ret), 5, args); \
}

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

#endif