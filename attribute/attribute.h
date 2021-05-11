/** @encoding utf-8 */
/**
 * *****************************************************************************
 * @file         attribute.h
 * @brief        Header gnu attribute
 * @details      ...
 * @author       tqfx
 * @date         20210101
 * @version      0.01
 * @copyright    Copyright (c) 2020-2021
 * *****************************************************************************
*/

/* Define to prevent recursive inclusion -------------------------------------*/

#ifndef __ATTRIBUTE_H__
#define __ATTRIBUTE_H__

#undef __BEGIN_DECLS
#undef __END_DECLS
#if defined(__cplusplus)

#define __BEGIN_DECLS \
    extern "C"        \
    {
#define __END_DECLS }

#else

#define __BEGIN_DECLS
#define __END_DECLS

#endif

__BEGIN_DECLS

/* Includes ------------------------------------------------------------------*/
/* Private includes ----------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/

#if defined(__GNUC__)

#undef __alias
#define __alias(x) __attribute__((__alias__(x)))

#undef __aligned
#define __aligned(x) __attribute__((__aligned__(x)))

#undef __alloc_size
#define __alloc_size(x) __attribute__((__alloc_size__(x)))
#undef __alloc_size2
#define __alloc_size2(n, x) __attribute__((__alloc_size__(n, x)))
#undef __alloc_align
#define __alloc_align(x) __attribute__((__alloc_align__(x)))

#undef __cleanup
#define __cleanup(x) __attribute__((__cleanup__(x)))

#undef __const
#define __const __attribute__((__const__))

#undef __constructor
#define __constructor(x) __attribute__((__constructor__(x)))
#undef __destructor
#define __destructor(x) __attribute__((__destructor__(x)))

#undef __flatten
#define __flatten __attribute__((__flatten__))

#define __printflike(fmtarg, firstvararg) \
    __attribute__((__format__(__printf__, fmtarg, firstvararg)))
#define __scanflike(fmtarg, firstvararg) \
    __attribute__((__format__(__scanf__, fmtarg, firstvararg)))
#define __format_arg(fmtarg) __attribute__((__format_arg__(fmtarg)))
#define __strfmonlike(fmtarg, firstvararg) \
    __attribute__((__format__(__strfmon__, fmtarg, firstvararg)))
#define __strftimelike(fmtarg, firstvararg) \
    __attribute__((__format__(__strftime__, fmtarg, firstvararg)))

#undef __noinline
#define __noinline __attribute__((__noinline__))
#undef __always_inline
#define __always_inline __attribute__((__always_inline__))

#undef __packed
#define __packed __attribute__((__packed__))
#undef __pure
#define __pure __attribute__((__pure__))

#undef __weak
#define __weak __attribute__((__weak__))

#undef __noreturn
#define __noreturn __attribute__((__noreturn__))

#undef __unused
#define __unused __attribute__((__unused__))
#undef __used
#define __used __attribute__((__used__))

#undef __section
#define __section(x) __attribute__((__section__(x)))

#undef __malloc_like
#define __malloc_like __attribute__((__malloc__))

#undef __nonnull
#define __nonnull(x) __attribute__((__nonnull__ x))
#undef __nonnull_all
#define __nonnull_all __attribute__((__nonnull__))

#undef __fastcall
#define __fastcall __attribute__((__fastcall__))
#undef __result_use_check
#define __result_use_check __attribute__((__warn_unused_result__))

#undef __returns_twice
#define __returns_twice __attribute__((__returns_twice__))

#undef __unreachable
#define __unreachable() __builtin_unreachable()

#undef __predict_true
#define __predict_true(exp) __builtin_expect((exp), 1)
#undef __predict_false
#define __predict_false(exp) __builtin_expect((exp), 0)

#undef __null_sentinel
#define __null_sentinel __attribute__((__sentinel__))
#undef __exported
#define __exported __attribute__((__visibility__("default")))
#undef __hidden
#define __hidden __attribute__((__visibility__("hidden")))

#else
#error Not support GNU
#endif /* __GNUC__ */

/* Exported functions prototypes ---------------------------------------------*/
/* Private defines -----------------------------------------------------------*/

__END_DECLS

#endif /* __ATTRIBUTE_H__ */

/************************ (C) COPYRIGHT tqfx *******************END OF FILE****/
