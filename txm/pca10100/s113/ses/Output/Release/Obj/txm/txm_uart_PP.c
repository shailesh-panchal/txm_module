# 1 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_uart.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_uart.c"

# 1 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 1
# 9 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h"
# 1 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdbool.h" 1 3 4
# 10 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdint.h" 1 3 4
# 41 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdint.h" 3 4

# 41 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdint.h" 3 4
typedef signed char int8_t;
typedef unsigned char uint8_t;




typedef signed short int16_t;
typedef unsigned short uint16_t;





typedef signed int int32_t;
typedef unsigned int uint32_t;
# 68 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdint.h" 3 4
typedef signed long long int64_t;
typedef unsigned long long uint64_t;


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int32_t int_fast8_t;
typedef int32_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;

typedef uint32_t uint_fast8_t;
typedef uint32_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;

typedef int32_t intptr_t;
typedef uint32_t uintptr_t;
# 118 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdint.h" 3 4
typedef int64_t intmax_t;
typedef uint64_t uintmax_t;
# 11 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../modules/nrfx/mdk/nrf.h" 1
# 164 "../../../../../../modules/nrfx/mdk/nrf.h"
# 1 "../../../../../../modules/nrfx/mdk/nrf52833.h" 1
# 78 "../../../../../../modules/nrfx/mdk/nrf52833.h"

# 78 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef enum {

  Reset_IRQn = -15,
  NonMaskableInt_IRQn = -14,
  HardFault_IRQn = -13,
  MemoryManagement_IRQn = -12,

  BusFault_IRQn = -11,

  UsageFault_IRQn = -10,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,

  POWER_CLOCK_IRQn = 0,
  RADIO_IRQn = 1,
  UARTE0_UART0_IRQn = 2,
  SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQn= 3,
  SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQn= 4,
  NFCT_IRQn = 5,
  GPIOTE_IRQn = 6,
  SAADC_IRQn = 7,
  TIMER0_IRQn = 8,
  TIMER1_IRQn = 9,
  TIMER2_IRQn = 10,
  RTC0_IRQn = 11,
  TEMP_IRQn = 12,
  RNG_IRQn = 13,
  ECB_IRQn = 14,
  CCM_AAR_IRQn = 15,
  WDT_IRQn = 16,
  RTC1_IRQn = 17,
  QDEC_IRQn = 18,
  COMP_LPCOMP_IRQn = 19,
  SWI0_EGU0_IRQn = 20,
  SWI1_EGU1_IRQn = 21,
  SWI2_EGU2_IRQn = 22,
  SWI3_EGU3_IRQn = 23,
  SWI4_EGU4_IRQn = 24,
  SWI5_EGU5_IRQn = 25,
  TIMER3_IRQn = 26,
  TIMER4_IRQn = 27,
  PWM0_IRQn = 28,
  PDM_IRQn = 29,
  MWU_IRQn = 32,
  PWM1_IRQn = 33,
  PWM2_IRQn = 34,
  SPIM2_SPIS2_SPI2_IRQn = 35,
  RTC2_IRQn = 36,
  I2S_IRQn = 37,
  FPU_IRQn = 38,
  USBD_IRQn = 39,
  UARTE1_IRQn = 40,
  PWM3_IRQn = 45,
  SPIM3_IRQn = 47
} IRQn_Type;
# 154 "../../../../../../modules/nrfx/mdk/nrf52833.h"
# 1 "../../../../../../components/toolchain/cmsis/include/core_cm4.h" 1
# 63 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
# 1 "../../../../../../components/toolchain/cmsis/include/cmsis_version.h" 1
# 64 "../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2
# 162 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
# 1 "../../../../../../components/toolchain/cmsis/include/cmsis_compiler.h" 1
# 54 "../../../../../../components/toolchain/cmsis/include/cmsis_compiler.h"
# 1 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 1
# 29 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 71 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_WRITE { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_READ { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_WRITE { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_READ { uint32_t v; };
#pragma GCC diagnostic pop
# 131 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline __attribute__((__noreturn__)) void __cmsis_start(void)
{
  extern void _start(void) __attribute__((__noreturn__));

  typedef struct {
    uint32_t const* src;
    uint32_t* dest;
    uint32_t wlen;
  } __copy_table_t;

  typedef struct {
    uint32_t* dest;
    uint32_t wlen;
  } __zero_table_t;

  extern const __copy_table_t __copy_table_start__;
  extern const __copy_table_t __copy_table_end__;
  extern const __zero_table_t __zero_table_start__;
  extern const __zero_table_t __zero_table_end__;

  for (__copy_table_t const* pTable = &__copy_table_start__; pTable < &__copy_table_end__; ++pTable) {
    for(uint32_t i=0u; i<pTable->wlen; ++i) {
      pTable->dest[i] = pTable->src[i];
    }
  }

  for (__zero_table_t const* pTable = &__zero_table_start__; pTable < &__zero_table_end__; ++pTable) {
    for(uint32_t i=0u; i<pTable->wlen; ++i) {
      pTable->dest[i] = 0u;
    }
  }

  _start();
}
# 196 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 248 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 272 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 344 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}
# 368 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 398 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}
# 449 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) :: "memory");
  return(result);
}
# 479 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 506 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_fault_irq(void)
{
  __asm volatile ("cpsie f" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_fault_irq(void)
{
  __asm volatile ("cpsid f" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_BASEPRI(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, basepri" : "=r" (result) );
  return(result);
}
# 558 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI(uint32_t basePri)
{
  __asm volatile ("MSR basepri, %0" : : "r" (basePri) : "memory");
}
# 583 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI_MAX(uint32_t basePri)
{
  __asm volatile ("MSR basepri_max, %0" : : "r" (basePri) : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_FAULTMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, faultmask" : "=r" (result) );
  return(result);
}
# 624 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_FAULTMASK(uint32_t faultMask)
{
  __asm volatile ("MSR faultmask, %0" : : "r" (faultMask) : "memory");
}
# 833 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_FPSCR(void)
{
# 843 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
  uint32_t result;

  __asm volatile ("VMRS %0, fpscr" : "=r" (result) );
  return(result);




}







__attribute__((always_inline)) static inline void __set_FPSCR(uint32_t fpscr)
{
# 869 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
  __asm volatile ("VMSR fpscr, %0" : : "r" (fpscr) : "vfpcc", "memory");




}
# 933 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 967 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 986 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return result;
}
# 1001 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int16_t __REVSH(int16_t value)
{

  return (int16_t)__builtin_bswap16(value);






}
# 1021 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U)
  {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 1048 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;




   __asm volatile ("rbit %0, %1" : "=r" (result) : "r" (value) );
# 1068 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
  return result;
}
# 1078 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __CLZ(uint32_t value)
{
# 1089 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
  if (value == 0U)
  {
    return 32U;
  }
  return __builtin_clz(value);
}
# 1107 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 1129 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 1151 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 1168 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 1185 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 1202 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   __asm volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}






__attribute__((always_inline)) static inline void __CLREX(void)
{
  __asm volatile ("clrex" ::: "memory");
}
# 1268 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RRX(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rrx %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 1283 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDRBT(volatile uint8_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrbt %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint8_t) result);
}
# 1305 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDRHT(volatile uint16_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrht %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint16_t) result);
}
# 1327 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDRT(volatile uint32_t *ptr)
{
    uint32_t result;

   __asm volatile ("ldrt %0, %1" : "=r" (result) : "Q" (*ptr) );
   return(result);
}
# 1342 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRBT(uint8_t value, volatile uint8_t *ptr)
{
   __asm volatile ("strbt %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1354 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRHT(uint16_t value, volatile uint16_t *ptr)
{
   __asm volatile ("strht %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1366 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRT(uint32_t value, volatile uint32_t *ptr)
{
   __asm volatile ("strt %1, %0" : "=Q" (*ptr) : "r" (value) );
}
# 1621 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __SADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usad8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USADA8(uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("usada8 %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}
# 1941 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __UXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("uxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("sxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUAD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuad %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUADX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuadx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLAD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlad %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLADX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smladx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLALD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlald %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLALDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlaldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SMUSD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUSDX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusdx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsd %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSDX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsdx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsld %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SEL (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sel %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QADD( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qadd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QSUB( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qsub %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}
# 2154 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __SMMLA (int32_t op1, int32_t op2, int32_t op3)
{
 int32_t result;

 __asm volatile ("smmla %0, %1, %2, %3" : "=r" (result): "r" (op1), "r" (op2), "r" (op3) );
 return(result);
}





#pragma GCC diagnostic pop
# 55 "../../../../../../components/toolchain/cmsis/include/cmsis_compiler.h" 2
# 163 "../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2
# 259 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;
# 298 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 316 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:1;
    uint32_t ICI_IT_1:6;
    uint32_t GE:4;
    uint32_t _reserved1:4;
    uint32_t T:1;
    uint32_t ICI_IT_2:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;
# 371 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t _reserved0:29;
  } b;
  uint32_t w;
} CONTROL_Type;
# 406 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t ISER[8U];
        uint32_t RESERVED0[24U];
  volatile uint32_t ICER[8U];
        uint32_t RESERVED1[24U];
  volatile uint32_t ISPR[8U];
        uint32_t RESERVED2[24U];
  volatile uint32_t ICPR[8U];
        uint32_t RESERVED3[24U];
  volatile uint32_t IABR[8U];
        uint32_t RESERVED4[56U];
  volatile uint8_t IP[240U];
        uint32_t RESERVED5[644U];
  volatile uint32_t STIR;
} NVIC_Type;
# 440 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12U];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2U];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4U];
  volatile const uint32_t ISAR[5U];
        uint32_t RESERVED0[5U];
  volatile uint32_t CPACR;
} SCB_Type;
# 719 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
} SCnSCB_Type;
# 759 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 811 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32U];
        uint32_t RESERVED0[864U];
  volatile uint32_t TER;
        uint32_t RESERVED1[15U];
  volatile uint32_t TPR;
        uint32_t RESERVED2[15U];
  volatile uint32_t TCR;
        uint32_t RESERVED3[32U];
        uint32_t RESERVED4[43U];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
        uint32_t RESERVED5[6U];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
# 899 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
  volatile uint32_t MASK0;
  volatile uint32_t FUNCTION0;
        uint32_t RESERVED0[1U];
  volatile uint32_t COMP1;
  volatile uint32_t MASK1;
  volatile uint32_t FUNCTION1;
        uint32_t RESERVED1[1U];
  volatile uint32_t COMP2;
  volatile uint32_t MASK2;
  volatile uint32_t FUNCTION2;
        uint32_t RESERVED2[1U];
  volatile uint32_t COMP3;
  volatile uint32_t MASK3;
  volatile uint32_t FUNCTION3;
} DWT_Type;
# 1046 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile const uint32_t SSPSR;
  volatile uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  volatile uint32_t ACPR;
        uint32_t RESERVED1[55U];
  volatile uint32_t SPPR;
        uint32_t RESERVED2[131U];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile const uint32_t FSCR;
        uint32_t RESERVED3[759U];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t FIFO0;
  volatile const uint32_t ITATBCTR2;
        uint32_t RESERVED4[1U];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t FIFO1;
  volatile uint32_t ITCTRL;
        uint32_t RESERVED5[39U];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
        uint32_t RESERVED7[8U];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;
# 1208 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile const uint32_t TYPE;
  volatile uint32_t CTRL;
  volatile uint32_t RNR;
  volatile uint32_t RBAR;
  volatile uint32_t RASR;
  volatile uint32_t RBAR_A1;
  volatile uint32_t RASR_A1;
  volatile uint32_t RBAR_A2;
  volatile uint32_t RASR_A2;
  volatile uint32_t RBAR_A3;
  volatile uint32_t RASR_A3;
} MPU_Type;
# 1304 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
  volatile const uint32_t MVFR2;
} FPU_Type;
# 1416 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
# 1648 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((uint32_t)((0xFFFFUL << 16U) | (7UL << 8U)));
  reg_value = (reg_value |
                ((uint32_t)0x5FAUL << 16U) |
                (PriorityGroupTmp << 8U) );
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}







static inline uint32_t __NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) >> 8U));
}
# 1679 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_EnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    __asm volatile("":::"memory");
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __asm volatile("":::"memory");
  }
}
# 1698 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1717 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_DisableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}
# 1736 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1755 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1770 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1787 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t __NVIC_GetActive(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1809 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] = (uint8_t)((priority << (8U - 3)) & (uint32_t)0xFFUL);
  }
  else
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - 3)) & (uint32_t)0xFFUL);
  }
}
# 1831 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return(((uint32_t)((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] >> (8U - 3)));
  }
  else
  {
    return(((uint32_t)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - 3)));
  }
}
# 1856 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(3)) ? (uint32_t)(3) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(3)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(3));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority & (uint32_t)((1UL << (SubPriorityBits )) - 1UL)))
         );
}
# 1883 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(3)) ? (uint32_t)(3) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(3)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(3));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority = (Priority ) & (uint32_t)((1UL << (SubPriorityBits )) - 1UL);
}
# 1906 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{
  uint32_t vectors = (uint32_t )((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  (* (int *) (vectors + ((int32_t)IRQn + 16) * 4)) = vector;

}
# 1922 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t __NVIC_GetVector(IRQn_Type IRQn)
{
  uint32_t vectors = (uint32_t )((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  return (uint32_t)(* (int *) (vectors + ((int32_t)IRQn + 16) * 4));
}






__attribute__((__noreturn__)) static inline void __NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = (uint32_t)((0x5FAUL << 16U) |
                           (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) |
                            (1UL << 2U) );
  __DSB();

  for(;;)
  {
    __asm volatile ("nop");
  }
}
# 1955 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
# 1 "../../../../../../components/toolchain/cmsis/include/mpu_armv7.h" 1
# 183 "../../../../../../components/toolchain/cmsis/include/mpu_armv7.h"
typedef struct {
  uint32_t RBAR;
  uint32_t RASR;
} ARM_MPU_Region_t;




static inline void ARM_MPU_Enable(uint32_t MPU_Control)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL = MPU_Control | (1UL );

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR |= (1UL << 16U);

  __DSB();
  __ISB();
}



static inline void ARM_MPU_Disable(void)
{
  __DMB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR &= ~(1UL << 16U);

  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL &= ~(1UL );
}




static inline void ARM_MPU_ClrRegion(uint32_t rnr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RNR = rnr;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = 0U;
}





static inline void ARM_MPU_SetRegion(uint32_t rbar, uint32_t rasr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR = rbar;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = rasr;
}






static inline void ARM_MPU_SetRegionEx(uint32_t rnr, uint32_t rbar, uint32_t rasr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RNR = rnr;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR = rbar;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = rasr;
}






static inline void ARM_MPU_OrderedMemcpy(volatile uint32_t* dst, const uint32_t* __restrict src, uint32_t len)
{
  uint32_t i;
  for (i = 0U; i < len; ++i)
  {
    dst[i] = src[i];
  }
}





static inline void ARM_MPU_Load(ARM_MPU_Region_t const* table, uint32_t cnt)
{
  const uint32_t rowWordSize = sizeof(ARM_MPU_Region_t)/4U;
  while (cnt > 4U) {
    ARM_MPU_OrderedMemcpy(&(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR), &(table->RBAR), 4U*rowWordSize);
    table += 4U;
    cnt -= 4U;
  }
  ARM_MPU_OrderedMemcpy(&(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR), &(table->RBAR), cnt*rowWordSize);
}
# 1956 "../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2
# 1976 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t SCB_GetFPUType(void)
{
  uint32_t mvfr0;

  mvfr0 = ((FPU_Type *) ((0xE000E000UL) + 0x0F30UL) )->MVFR0;
  if ((mvfr0 & ((0xFUL << 4U) | (0xFUL << 8U))) == 0x020U)
  {
    return 1U;
  }
  else
  {
    return 0U;
  }
}
# 2017 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  __NVIC_SetPriority (SysTick_IRQn, (1UL << 3) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 2047 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
extern volatile int32_t ITM_RxBuffer;
# 2059 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if (((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL )) != 0UL) &&
      ((((ITM_Type *) (0xE0000000UL) )->TER & 1UL ) != 0UL) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0U].u32 == 0UL)
    {
      __asm volatile ("nop");
    }
    ((ITM_Type *) (0xE0000000UL) )->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}
# 2080 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != ((int32_t)0x5AA55AA5U))
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = ((int32_t)0x5AA55AA5U);
  }

  return (ch);
}
# 2100 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == ((int32_t)0x5AA55AA5U))
  {
    return (0);
  }
  else
  {
    return (1);
  }
}
# 155 "../../../../../../modules/nrfx/mdk/nrf52833.h" 2
# 1 "../../../../../../modules/nrfx/mdk/system_nrf52833.h" 1
# 33 "../../../../../../modules/nrfx/mdk/system_nrf52833.h"
extern uint32_t SystemCoreClock;
# 44 "../../../../../../modules/nrfx/mdk/system_nrf52833.h"
extern void SystemInit (void);
# 55 "../../../../../../modules/nrfx/mdk/system_nrf52833.h"
extern void SystemCoreClockUpdate (void);
# 156 "../../../../../../modules/nrfx/mdk/nrf52833.h" 2
# 206 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t PART;
  volatile const uint32_t VARIANT;
  volatile const uint32_t PACKAGE;
  volatile const uint32_t RAM;
  volatile const uint32_t FLASH;
} FICR_INFO_Type;





typedef struct {
  volatile const uint32_t A0;
  volatile const uint32_t A1;
  volatile const uint32_t A2;
  volatile const uint32_t A3;
  volatile const uint32_t A4;
  volatile const uint32_t A5;
  volatile const uint32_t B0;
  volatile const uint32_t B1;
  volatile const uint32_t B2;
  volatile const uint32_t B3;
  volatile const uint32_t B4;
  volatile const uint32_t B5;
  volatile const uint32_t T0;
  volatile const uint32_t T1;
  volatile const uint32_t T2;
  volatile const uint32_t T3;
  volatile const uint32_t T4;
} FICR_TEMP_Type;





typedef struct {
  volatile const uint32_t TAGHEADER0;


  volatile const uint32_t TAGHEADER1;


  volatile const uint32_t TAGHEADER2;


  volatile const uint32_t TAGHEADER3;


} FICR_NFC_Type;





typedef struct {
  volatile uint32_t POWER;
  volatile uint32_t POWERSET;
  volatile uint32_t POWERCLR;

  volatile const uint32_t RESERVED;
} POWER_RAM_Type;





typedef struct {
  volatile uint32_t DFEGPIO[8];

} RADIO_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} RADIO_DFEPACKET_Type;





typedef struct {
  volatile uint32_t RTS;
  volatile uint32_t TXD;
  volatile uint32_t CTS;
  volatile uint32_t RXD;
} UART_PSEL_Type;





typedef struct {
  volatile uint32_t RTS;
  volatile uint32_t TXD;
  volatile uint32_t CTS;
  volatile uint32_t RXD;
} UARTE_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} UARTE_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} UARTE_TXD_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MOSI;
  volatile uint32_t MISO;
} SPI_PSEL_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MOSI;
  volatile uint32_t MISO;
  volatile uint32_t CSN;
} SPIM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIM_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIM_TXD_Type;





typedef struct {
  volatile uint32_t RXDELAY;
  volatile uint32_t CSNDUR;


} SPIM_IFTIMING_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MISO;
  volatile uint32_t MOSI;
  volatile uint32_t CSN;
} SPIS_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIS_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIS_TXD_Type;





typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWI_PSEL_Type;





typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWIM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIM_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIM_TXD_Type;





typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWIS_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIS_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIS_TXD_Type;





typedef struct {
  volatile uint32_t RX;
} NFCT_FRAMESTATUS_Type;





typedef struct {
  volatile uint32_t FRAMECONFIG;
  volatile uint32_t AMOUNT;
} NFCT_TXD_Type;





typedef struct {
  volatile uint32_t FRAMECONFIG;
  volatile const uint32_t AMOUNT;
} NFCT_RXD_Type;





typedef struct {
  volatile uint32_t LIMITH;

  volatile uint32_t LIMITL;

} SAADC_EVENTS_CH_Type;





typedef struct {
  volatile uint32_t PSELP;

  volatile uint32_t PSELN;

  volatile uint32_t CONFIG;

  volatile uint32_t LIMIT;

} SAADC_CH_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;

  volatile const uint32_t AMOUNT;

} SAADC_RESULT_Type;





typedef struct {
  volatile uint32_t LED;
  volatile uint32_t A;
  volatile uint32_t B;
} QDEC_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;

  volatile uint32_t CNT;

  volatile uint32_t REFRESH;


  volatile uint32_t ENDDELAY;
  volatile const uint32_t RESERVED[4];
} PWM_SEQ_Type;





typedef struct {
  volatile uint32_t OUT[4];

} PWM_PSEL_Type;





typedef struct {
  volatile uint32_t CLK;
  volatile uint32_t DIN;
} PDM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;

  volatile uint32_t MAXCNT;

} PDM_SAMPLE_Type;





typedef struct {
  volatile uint32_t ADDR;

  volatile uint32_t SIZE;


  volatile uint32_t PERM;


  volatile const uint32_t RESERVED;
} ACL_ACL_Type;





typedef struct {
  volatile uint32_t EN;
  volatile uint32_t DIS;
} PPI_TASKS_CHG_Type;





typedef struct {
  volatile uint32_t EEP;
  volatile uint32_t TEP;
} PPI_CH_Type;





typedef struct {
  volatile uint32_t TEP;
} PPI_FORK_Type;





typedef struct {
  volatile uint32_t WA;

  volatile uint32_t RA;

} MWU_EVENTS_REGION_Type;





typedef struct {
  volatile uint32_t WA;

  volatile uint32_t RA;

} MWU_EVENTS_PREGION_Type;





typedef struct {
  volatile uint32_t SUBSTATWA;



  volatile uint32_t SUBSTATRA;



} MWU_PERREGION_Type;





typedef struct {
  volatile uint32_t START;

  volatile uint32_t END;
  volatile const uint32_t RESERVED[2];
} MWU_REGION_Type;





typedef struct {
  volatile const uint32_t START;
  volatile const uint32_t END;
  volatile uint32_t SUBS;
  volatile const uint32_t RESERVED;
} MWU_PREGION_Type;





typedef struct {
  volatile uint32_t MODE;
  volatile uint32_t RXEN;
  volatile uint32_t TXEN;
  volatile uint32_t MCKEN;
  volatile uint32_t MCKFREQ;
  volatile uint32_t RATIO;
  volatile uint32_t SWIDTH;
  volatile uint32_t ALIGN;
  volatile uint32_t FORMAT;
  volatile uint32_t CHANNELS;
} I2S_CONFIG_Type;





typedef struct {
  volatile uint32_t PTR;
} I2S_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
} I2S_TXD_Type;





typedef struct {
  volatile uint32_t MAXCNT;
} I2S_RXTXD_Type;





typedef struct {
  volatile uint32_t MCK;
  volatile uint32_t SCK;
  volatile uint32_t LRCK;
  volatile uint32_t SDIN;
  volatile uint32_t SDOUT;
} I2S_PSEL_Type;





typedef struct {
  volatile const uint32_t EPIN[8];


  volatile const uint32_t RESERVED;
  volatile const uint32_t EPOUT[8];


} USBD_HALTED_Type;





typedef struct {
  volatile uint32_t EPOUT[8];

  volatile const uint32_t ISOOUT;

} USBD_SIZE_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;

  volatile const uint32_t AMOUNT;

  volatile const uint32_t RESERVED[2];
} USBD_EPIN_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} USBD_ISOIN_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;

  volatile const uint32_t AMOUNT;

  volatile const uint32_t RESERVED[2];
} USBD_EPOUT_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} USBD_ISOOUT_Type;
# 856 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t RESERVED[4];
  volatile const uint32_t CODEPAGESIZE;
  volatile const uint32_t CODESIZE;
  volatile const uint32_t RESERVED1[18];
  volatile const uint32_t DEVICEID[2];
  volatile const uint32_t RESERVED2[6];
  volatile const uint32_t ER[4];

  volatile const uint32_t IR[4];
  volatile const uint32_t DEVICEADDRTYPE;
  volatile const uint32_t DEVICEADDR[2];
  volatile const uint32_t RESERVED3[21];
  volatile const FICR_INFO_Type INFO;
  volatile const uint32_t RESERVED4[143];
  volatile const uint32_t PRODTEST[3];

  volatile const uint32_t RESERVED5[42];
  volatile const FICR_TEMP_Type TEMP;

  volatile const uint32_t RESERVED6[2];
  volatile FICR_NFC_Type NFC;
} NRF_FICR_Type;
# 891 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t RESERVED[5];
  volatile uint32_t NRFFW[13];

  volatile const uint32_t RESERVED1[2];
  volatile uint32_t NRFHW[12];

  volatile uint32_t CUSTOMER[32];
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t PSELRESET[2];

  volatile uint32_t APPROTECT;
  volatile uint32_t NFCPINS;

  volatile uint32_t DEBUGCTRL;
  volatile const uint32_t RESERVED3[60];
  volatile uint32_t REGOUT0;


} NRF_UICR_Type;
# 923 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_HFCLKSTART;
  volatile uint32_t TASKS_HFCLKSTOP;
  volatile uint32_t TASKS_LFCLKSTART;
  volatile uint32_t TASKS_LFCLKSTOP;
  volatile uint32_t TASKS_CAL;
  volatile uint32_t TASKS_CTSTART;
  volatile uint32_t TASKS_CTSTOP;
  volatile const uint32_t RESERVED[57];
  volatile uint32_t EVENTS_HFCLKSTARTED;
  volatile uint32_t EVENTS_LFCLKSTARTED;
  volatile const uint32_t RESERVED1;
  volatile uint32_t EVENTS_DONE;
  volatile uint32_t EVENTS_CTTO;
  volatile const uint32_t RESERVED2[5];
  volatile uint32_t EVENTS_CTSTARTED;

  volatile uint32_t EVENTS_CTSTOPPED;

  volatile const uint32_t RESERVED3[117];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[63];
  volatile const uint32_t HFCLKRUN;

  volatile const uint32_t HFCLKSTAT;
  volatile const uint32_t RESERVED5;
  volatile const uint32_t LFCLKRUN;

  volatile const uint32_t LFCLKSTAT;
  volatile const uint32_t LFCLKSRCCOPY;

  volatile const uint32_t RESERVED6[62];
  volatile uint32_t LFCLKSRC;
  volatile const uint32_t RESERVED7[3];
  volatile uint32_t HFXODEBOUNCE;

  volatile uint32_t LFXODEBOUNCE;


  volatile const uint32_t RESERVED8[2];
  volatile uint32_t CTIV;
  volatile const uint32_t RESERVED9[8];
  volatile uint32_t TRACECONFIG;
} NRF_CLOCK_Type;
# 980 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t RESERVED[30];
  volatile uint32_t TASKS_CONSTLAT;
  volatile uint32_t TASKS_LOWPWR;
  volatile const uint32_t RESERVED1[34];
  volatile uint32_t EVENTS_POFWARN;
  volatile const uint32_t RESERVED2[2];
  volatile uint32_t EVENTS_SLEEPENTER;
  volatile uint32_t EVENTS_SLEEPEXIT;
  volatile uint32_t EVENTS_USBDETECTED;
  volatile uint32_t EVENTS_USBREMOVED;
  volatile uint32_t EVENTS_USBPWRRDY;
  volatile const uint32_t RESERVED3[119];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[61];
  volatile uint32_t RESETREAS;
  volatile const uint32_t RESERVED5[9];
  volatile const uint32_t RAMSTATUS;
  volatile const uint32_t RESERVED6[3];
  volatile const uint32_t USBREGSTATUS;
  volatile const uint32_t RESERVED7[49];
  volatile uint32_t SYSTEMOFF;
  volatile const uint32_t RESERVED8[3];
  volatile uint32_t POFCON;
  volatile const uint32_t RESERVED9[2];
  volatile uint32_t GPREGRET;
  volatile uint32_t GPREGRET2;
  volatile const uint32_t RESERVED10[21];
  volatile uint32_t DCDCEN;
  volatile const uint32_t RESERVED11[49];
  volatile const uint32_t MAINREGSTATUS;
  volatile const uint32_t RESERVED12[175];
  volatile POWER_RAM_Type RAM[9];
} NRF_POWER_Type;
# 1027 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t RESERVED[321];
  volatile uint32_t OUT;
  volatile uint32_t OUTSET;
  volatile uint32_t OUTCLR;
  volatile const uint32_t IN;
  volatile uint32_t DIR;
  volatile uint32_t DIRSET;
  volatile uint32_t DIRCLR;
  volatile uint32_t LATCH;


  volatile uint32_t DETECTMODE;

  volatile const uint32_t RESERVED1[118];
  volatile uint32_t PIN_CNF[32];

} NRF_GPIO_Type;
# 1057 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_TXEN;
  volatile uint32_t TASKS_RXEN;
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_DISABLE;
  volatile uint32_t TASKS_RSSISTART;

  volatile uint32_t TASKS_RSSISTOP;
  volatile uint32_t TASKS_BCSTART;
  volatile uint32_t TASKS_BCSTOP;
  volatile uint32_t TASKS_EDSTART;

  volatile uint32_t TASKS_EDSTOP;
  volatile uint32_t TASKS_CCASTART;

  volatile uint32_t TASKS_CCASTOP;
  volatile const uint32_t RESERVED[51];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_ADDRESS;
  volatile uint32_t EVENTS_PAYLOAD;
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_DISABLED;
  volatile uint32_t EVENTS_DEVMATCH;

  volatile uint32_t EVENTS_DEVMISS;

  volatile uint32_t EVENTS_RSSIEND;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t EVENTS_BCMATCH;
  volatile const uint32_t RESERVED2;
  volatile uint32_t EVENTS_CRCOK;
  volatile uint32_t EVENTS_CRCERROR;
  volatile uint32_t EVENTS_FRAMESTART;
  volatile uint32_t EVENTS_EDEND;


  volatile uint32_t EVENTS_EDSTOPPED;
  volatile uint32_t EVENTS_CCAIDLE;
  volatile uint32_t EVENTS_CCABUSY;
  volatile uint32_t EVENTS_CCASTOPPED;
  volatile uint32_t EVENTS_RATEBOOST;

  volatile uint32_t EVENTS_TXREADY;

  volatile uint32_t EVENTS_RXREADY;

  volatile uint32_t EVENTS_MHRMATCH;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_SYNC;
  volatile uint32_t EVENTS_PHYEND;

  volatile uint32_t EVENTS_CTEPRESENT;

  volatile const uint32_t RESERVED4[35];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED6[61];
  volatile const uint32_t CRCSTATUS;
  volatile const uint32_t RESERVED7;
  volatile const uint32_t RXMATCH;
  volatile const uint32_t RXCRC;
  volatile const uint32_t DAI;
  volatile const uint32_t PDUSTAT;
  volatile const uint32_t RESERVED8[13];
  volatile const uint32_t CTESTATUS;
  volatile const uint32_t RESERVED9[2];
  volatile const uint32_t DFESTATUS;
  volatile const uint32_t RESERVED10[42];
  volatile uint32_t PACKETPTR;
  volatile uint32_t FREQUENCY;
  volatile uint32_t TXPOWER;
  volatile uint32_t MODE;
  volatile uint32_t PCNF0;
  volatile uint32_t PCNF1;
  volatile uint32_t BASE0;
  volatile uint32_t BASE1;
  volatile uint32_t PREFIX0;
  volatile uint32_t PREFIX1;
  volatile uint32_t TXADDRESS;
  volatile uint32_t RXADDRESSES;
  volatile uint32_t CRCCNF;
  volatile uint32_t CRCPOLY;
  volatile uint32_t CRCINIT;
  volatile const uint32_t RESERVED11;
  volatile uint32_t TIFS;
  volatile const uint32_t RSSISAMPLE;
  volatile const uint32_t RESERVED12;
  volatile const uint32_t STATE;
  volatile uint32_t DATAWHITEIV;
  volatile const uint32_t RESERVED13[2];
  volatile uint32_t BCC;
  volatile const uint32_t RESERVED14[39];
  volatile uint32_t DAB[8];

  volatile uint32_t DAP[8];

  volatile uint32_t DACNF;
  volatile uint32_t MHRMATCHCONF;
  volatile uint32_t MHRMATCHMAS;
  volatile const uint32_t RESERVED15;
  volatile uint32_t MODECNF0;
  volatile const uint32_t RESERVED16[3];
  volatile uint32_t SFD;
  volatile uint32_t EDCNT;
  volatile const uint32_t EDSAMPLE;
  volatile uint32_t CCACTRL;
  volatile const uint32_t RESERVED17[164];
  volatile uint32_t DFEMODE;

  volatile uint32_t CTEINLINECONF;
  volatile const uint32_t RESERVED18[2];
  volatile uint32_t DFECTRL1;
  volatile uint32_t DFECTRL2;
  volatile const uint32_t RESERVED19[4];
  volatile uint32_t SWITCHPATTERN;
  volatile uint32_t CLEARPATTERN;
  volatile RADIO_PSEL_Type PSEL;
  volatile RADIO_DFEPACKET_Type DFEPACKET;
  volatile const uint32_t RESERVED20[424];
  volatile uint32_t POWER;
} NRF_RADIO_Type;
# 1193 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile uint32_t TASKS_STOPRX;
  volatile uint32_t TASKS_STARTTX;
  volatile uint32_t TASKS_STOPTX;
  volatile const uint32_t RESERVED[3];
  volatile uint32_t TASKS_SUSPEND;
  volatile const uint32_t RESERVED1[56];
  volatile uint32_t EVENTS_CTS;
  volatile uint32_t EVENTS_NCTS;
  volatile uint32_t EVENTS_RXDRDY;
  volatile const uint32_t RESERVED2[4];
  volatile uint32_t EVENTS_TXDRDY;
  volatile const uint32_t RESERVED3;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_RXTO;
  volatile const uint32_t RESERVED5[46];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED6[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED7[93];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED8[31];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED9;
  volatile UART_PSEL_Type PSEL;
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED10;
  volatile uint32_t BAUDRATE;

  volatile const uint32_t RESERVED11[17];
  volatile uint32_t CONFIG;
} NRF_UART_Type;
# 1241 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile uint32_t TASKS_STOPRX;
  volatile uint32_t TASKS_STARTTX;
  volatile uint32_t TASKS_STOPTX;
  volatile const uint32_t RESERVED[7];
  volatile uint32_t TASKS_FLUSHRX;
  volatile const uint32_t RESERVED1[52];
  volatile uint32_t EVENTS_CTS;
  volatile uint32_t EVENTS_NCTS;
  volatile uint32_t EVENTS_RXDRDY;

  volatile const uint32_t RESERVED2;
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_TXDRDY;
  volatile uint32_t EVENTS_ENDTX;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_RXTO;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6;
  volatile uint32_t EVENTS_TXSTOPPED;
  volatile const uint32_t RESERVED7[41];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[93];
  volatile uint32_t ERRORSRC;

  volatile const uint32_t RESERVED10[31];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile UARTE_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[3];
  volatile uint32_t BAUDRATE;

  volatile const uint32_t RESERVED13[3];
  volatile UARTE_RXD_Type RXD;
  volatile const uint32_t RESERVED14;
  volatile UARTE_TXD_Type TXD;
  volatile const uint32_t RESERVED15[7];
  volatile uint32_t CONFIG;
} NRF_UARTE_Type;
# 1301 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t RESERVED[66];
  volatile uint32_t EVENTS_READY;
  volatile const uint32_t RESERVED1[126];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[125];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED3;
  volatile SPI_PSEL_Type PSEL;
  volatile const uint32_t RESERVED4;
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED5;
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED6[11];
  volatile uint32_t CONFIG;
} NRF_SPI_Type;
# 1332 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t RESERVED[4];
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED2[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED4;
  volatile uint32_t EVENTS_END;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_ENDTX;
  volatile const uint32_t RESERVED6[10];
  volatile uint32_t EVENTS_STARTED;
  volatile const uint32_t RESERVED7[44];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[61];
  volatile uint32_t STALLSTAT;



  volatile const uint32_t RESERVED10[63];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile SPIM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[3];
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED13[3];
  volatile SPIM_RXD_Type RXD;
  volatile SPIM_TXD_Type TXD;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED14[2];
  volatile SPIM_IFTIMING_Type IFTIMING;
  volatile uint32_t CSNPOL;
  volatile uint32_t PSELDCX;
  volatile uint32_t DCXCNT;
  volatile const uint32_t RESERVED15[19];
  volatile uint32_t ORC;


} NRF_SPIM_Type;
# 1392 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t RESERVED[9];
  volatile uint32_t TASKS_ACQUIRE;
  volatile uint32_t TASKS_RELEASE;

  volatile const uint32_t RESERVED1[54];
  volatile uint32_t EVENTS_END;
  volatile const uint32_t RESERVED2[2];
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t EVENTS_ACQUIRED;
  volatile const uint32_t RESERVED4[53];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED6[61];
  volatile const uint32_t SEMSTAT;
  volatile const uint32_t RESERVED7[15];
  volatile uint32_t STATUS;
  volatile const uint32_t RESERVED8[47];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED9;
  volatile SPIS_PSEL_Type PSEL;
  volatile const uint32_t RESERVED10[7];
  volatile SPIS_RXD_Type RXD;
  volatile SPIS_TXD_Type TXD;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED11;
  volatile uint32_t DEF;

  volatile const uint32_t RESERVED12[24];
  volatile uint32_t ORC;
} NRF_SPIS_Type;
# 1438 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STARTTX;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED2;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED3[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile uint32_t EVENTS_RXDREADY;
  volatile const uint32_t RESERVED4[4];
  volatile uint32_t EVENTS_TXDSENT;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED6[4];
  volatile uint32_t EVENTS_BB;

  volatile const uint32_t RESERVED7[3];
  volatile uint32_t EVENTS_SUSPENDED;
  volatile const uint32_t RESERVED8[45];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED9[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED10[110];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED11[14];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED12;
  volatile TWI_PSEL_Type PSEL;
  volatile const uint32_t RESERVED13[2];
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED14;
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED15[24];
  volatile uint32_t ADDRESS;
} NRF_TWI_Type;
# 1491 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STARTTX;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t TASKS_STOP;

  volatile const uint32_t RESERVED2;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED3[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED5[8];
  volatile uint32_t EVENTS_SUSPENDED;


  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6[2];
  volatile uint32_t EVENTS_LASTRX;
  volatile uint32_t EVENTS_LASTTX;

  volatile const uint32_t RESERVED7[39];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[110];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED10[14];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile TWIM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[5];
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED13[3];
  volatile TWIM_RXD_Type RXD;
  volatile TWIM_TXD_Type TXD;
  volatile const uint32_t RESERVED14[13];
  volatile uint32_t ADDRESS;
} NRF_TWIM_Type;
# 1548 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t RESERVED[5];
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED2[3];
  volatile uint32_t TASKS_PREPARERX;
  volatile uint32_t TASKS_PREPARETX;
  volatile const uint32_t RESERVED3[51];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED5[9];
  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6[4];
  volatile uint32_t EVENTS_WRITE;
  volatile uint32_t EVENTS_READ;
  volatile const uint32_t RESERVED7[37];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[113];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t MATCH;

  volatile const uint32_t RESERVED10[10];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile TWIS_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[9];
  volatile TWIS_RXD_Type RXD;
  volatile TWIS_TXD_Type TXD;
  volatile const uint32_t RESERVED13[13];
  volatile uint32_t ADDRESS[2];
  volatile const uint32_t RESERVED14;
  volatile uint32_t CONFIG;

  volatile const uint32_t RESERVED15[10];
  volatile uint32_t ORC;

} NRF_TWIS_Type;
# 1605 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_ACTIVATE;

  volatile uint32_t TASKS_DISABLE;
  volatile uint32_t TASKS_SENSE;

  volatile uint32_t TASKS_STARTTX;

  volatile const uint32_t RESERVED[3];
  volatile uint32_t TASKS_ENABLERXDATA;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_GOIDLE;
  volatile uint32_t TASKS_GOSLEEP;
  volatile const uint32_t RESERVED2[53];
  volatile uint32_t EVENTS_READY;

  volatile uint32_t EVENTS_FIELDDETECTED;
  volatile uint32_t EVENTS_FIELDLOST;
  volatile uint32_t EVENTS_TXFRAMESTART;

  volatile uint32_t EVENTS_TXFRAMEEND;

  volatile uint32_t EVENTS_RXFRAMESTART;

  volatile uint32_t EVENTS_RXFRAMEEND;


  volatile uint32_t EVENTS_ERROR;

  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_RXERROR;


  volatile uint32_t EVENTS_ENDRX;

  volatile uint32_t EVENTS_ENDTX;

  volatile const uint32_t RESERVED4;
  volatile uint32_t EVENTS_AUTOCOLRESSTARTED;
  volatile const uint32_t RESERVED5[3];
  volatile uint32_t EVENTS_COLLISION;
  volatile uint32_t EVENTS_SELECTED;
  volatile uint32_t EVENTS_STARTED;
  volatile const uint32_t RESERVED6[43];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED7[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED8[62];
  volatile uint32_t ERRORSTATUS;
  volatile const uint32_t RESERVED9;
  volatile NFCT_FRAMESTATUS_Type FRAMESTATUS;
  volatile const uint32_t NFCTAGSTATE;
  volatile const uint32_t RESERVED10[3];
  volatile const uint32_t SLEEPSTATE;
  volatile const uint32_t RESERVED11[6];
  volatile const uint32_t FIELDPRESENT;
  volatile const uint32_t RESERVED12[49];
  volatile uint32_t FRAMEDELAYMIN;
  volatile uint32_t FRAMEDELAYMAX;
  volatile uint32_t FRAMEDELAYMODE;
  volatile uint32_t PACKETPTR;

  volatile uint32_t MAXLEN;

  volatile NFCT_TXD_Type TXD;
  volatile NFCT_RXD_Type RXD;
  volatile const uint32_t RESERVED13;
  volatile uint32_t MODULATIONCTRL;

  volatile const uint32_t RESERVED14[2];
  volatile uint32_t MODULATIONPSEL;
  volatile const uint32_t RESERVED15[21];
  volatile uint32_t NFCID1_LAST;
  volatile uint32_t NFCID1_2ND_LAST;
  volatile uint32_t NFCID1_3RD_LAST;
  volatile uint32_t AUTOCOLRESCONFIG;


  volatile uint32_t SENSRES;
  volatile uint32_t SELRES;
} NRF_NFCT_Type;
# 1700 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_OUT[8];


  volatile const uint32_t RESERVED[4];
  volatile uint32_t TASKS_SET[8];


  volatile const uint32_t RESERVED1[4];
  volatile uint32_t TASKS_CLR[8];


  volatile const uint32_t RESERVED2[32];
  volatile uint32_t EVENTS_IN[8];

  volatile const uint32_t RESERVED3[23];
  volatile uint32_t EVENTS_PORT;

  volatile const uint32_t RESERVED4[97];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED5[129];
  volatile uint32_t CONFIG[8];

} NRF_GPIOTE_Type;
# 1737 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_START;

  volatile uint32_t TASKS_SAMPLE;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_CALIBRATEOFFSET;
  volatile const uint32_t RESERVED[60];
  volatile uint32_t EVENTS_STARTED;
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_DONE;



  volatile uint32_t EVENTS_RESULTDONE;
  volatile uint32_t EVENTS_CALIBRATEDONE;
  volatile uint32_t EVENTS_STOPPED;
  volatile SAADC_EVENTS_CH_Type EVENTS_CH[8];
  volatile const uint32_t RESERVED1[106];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[61];
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED4[3];
  volatile SAADC_CH_Type CH[8];
  volatile const uint32_t RESERVED5[24];
  volatile uint32_t RESOLUTION;
  volatile uint32_t OVERSAMPLE;



  volatile uint32_t SAMPLERATE;
  volatile const uint32_t RESERVED6[12];
  volatile SAADC_RESULT_Type RESULT;
} NRF_SAADC_Type;
# 1786 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_COUNT;
  volatile uint32_t TASKS_CLEAR;
  volatile uint32_t TASKS_SHUTDOWN;
  volatile const uint32_t RESERVED[11];
  volatile uint32_t TASKS_CAPTURE[6];

  volatile const uint32_t RESERVED1[58];
  volatile uint32_t EVENTS_COMPARE[6];

  volatile const uint32_t RESERVED2[42];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[126];
  volatile uint32_t MODE;
  volatile uint32_t BITMODE;
  volatile const uint32_t RESERVED5;
  volatile uint32_t PRESCALER;
  volatile const uint32_t RESERVED6[11];
  volatile uint32_t CC[6];

} NRF_TIMER_Type;
# 1824 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_CLEAR;
  volatile uint32_t TASKS_TRIGOVRFLW;
  volatile const uint32_t RESERVED[60];
  volatile uint32_t EVENTS_TICK;
  volatile uint32_t EVENTS_OVRFLW;
  volatile const uint32_t RESERVED1[14];
  volatile uint32_t EVENTS_COMPARE[4];

  volatile const uint32_t RESERVED2[109];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[13];
  volatile uint32_t EVTEN;
  volatile uint32_t EVTENSET;
  volatile uint32_t EVTENCLR;
  volatile const uint32_t RESERVED4[110];
  volatile const uint32_t COUNTER;
  volatile uint32_t PRESCALER;

  volatile const uint32_t RESERVED5[13];
  volatile uint32_t CC[4];
} NRF_RTC_Type;
# 1861 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_DATARDY;
  volatile const uint32_t RESERVED1[128];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[127];
  volatile const int32_t TEMP;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t A0;
  volatile uint32_t A1;
  volatile uint32_t A2;
  volatile uint32_t A3;
  volatile uint32_t A4;
  volatile uint32_t A5;
  volatile const uint32_t RESERVED4[2];
  volatile uint32_t B0;
  volatile uint32_t B1;
  volatile uint32_t B2;
  volatile uint32_t B3;
  volatile uint32_t B4;
  volatile uint32_t B5;
  volatile const uint32_t RESERVED5[2];
  volatile uint32_t T0;
  volatile uint32_t T1;
  volatile uint32_t T2;
  volatile uint32_t T3;
  volatile uint32_t T4;
} NRF_TEMP_Type;
# 1904 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_VALRDY;

  volatile const uint32_t RESERVED1[63];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[126];
  volatile uint32_t CONFIG;
  volatile const uint32_t VALUE;
} NRF_RNG_Type;
# 1931 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_STARTECB;
  volatile uint32_t TASKS_STOPECB;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_ENDECB;
  volatile uint32_t EVENTS_ERRORECB;

  volatile const uint32_t RESERVED1[127];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[126];
  volatile uint32_t ECBDATAPTR;
} NRF_ECB_Type;
# 1956 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_START;

  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1[61];
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_RESOLVED;
  volatile uint32_t EVENTS_NOTRESOLVED;
  volatile const uint32_t RESERVED2[126];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t NIRK;
  volatile uint32_t IRKPTR;
  volatile const uint32_t RESERVED5;
  volatile uint32_t ADDRPTR;
  volatile uint32_t SCRATCHPTR;
} NRF_AAR_Type;
# 1990 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_KSGEN;

  volatile uint32_t TASKS_CRYPT;

  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_RATEOVERRIDE;


  volatile const uint32_t RESERVED[60];
  volatile uint32_t EVENTS_ENDKSGEN;
  volatile uint32_t EVENTS_ENDCRYPT;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED1[61];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t MICSTATUS;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t MODE;
  volatile uint32_t CNFPTR;

  volatile uint32_t INPTR;
  volatile uint32_t OUTPTR;
  volatile uint32_t SCRATCHPTR;
  volatile uint32_t MAXPACKETSIZE;

  volatile uint32_t RATEOVERRIDE;
} NRF_CCM_Type;
# 2034 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile const uint32_t RESERVED[63];
  volatile uint32_t EVENTS_TIMEOUT;
  volatile const uint32_t RESERVED1[128];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[61];
  volatile const uint32_t RUNSTATUS;
  volatile const uint32_t REQSTATUS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t CRV;
  volatile uint32_t RREN;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED4[60];
  volatile uint32_t RR[8];
} NRF_WDT_Type;
# 2063 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_READCLRACC;
  volatile uint32_t TASKS_RDCLRACC;
  volatile uint32_t TASKS_RDCLRDBL;
  volatile const uint32_t RESERVED[59];
  volatile uint32_t EVENTS_SAMPLERDY;

  volatile uint32_t EVENTS_REPORTRDY;
  volatile uint32_t EVENTS_ACCOF;
  volatile uint32_t EVENTS_DBLRDY;
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED1[59];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[125];
  volatile uint32_t ENABLE;
  volatile uint32_t LEDPOL;
  volatile uint32_t SAMPLEPER;
  volatile const int32_t SAMPLE;
  volatile uint32_t REPORTPER;

  volatile const int32_t ACC;
  volatile const int32_t ACCREAD;

  volatile QDEC_PSEL_Type PSEL;
  volatile uint32_t DBFEN;
  volatile const uint32_t RESERVED4[5];
  volatile uint32_t LEDPRE;
  volatile const uint32_t ACCDBL;

  volatile const uint32_t ACCDBLREAD;

} NRF_QDEC_Type;
# 2112 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_SAMPLE;
  volatile const uint32_t RESERVED[61];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_DOWN;
  volatile uint32_t EVENTS_UP;
  volatile uint32_t EVENTS_CROSS;
  volatile const uint32_t RESERVED1[60];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t RESULT;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t PSEL;
  volatile uint32_t REFSEL;
  volatile uint32_t EXTREFSEL;
  volatile const uint32_t RESERVED5[8];
  volatile uint32_t TH;
  volatile uint32_t MODE;
  volatile uint32_t HYST;
} NRF_COMP_Type;
# 2151 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_SAMPLE;
  volatile const uint32_t RESERVED[61];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_DOWN;
  volatile uint32_t EVENTS_UP;
  volatile uint32_t EVENTS_CROSS;
  volatile const uint32_t RESERVED1[60];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t RESULT;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t PSEL;
  volatile uint32_t REFSEL;
  volatile uint32_t EXTREFSEL;
  volatile const uint32_t RESERVED5[4];
  volatile uint32_t ANADETECT;
  volatile const uint32_t RESERVED6[5];
  volatile uint32_t HYST;
} NRF_LPCOMP_Type;
# 2189 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_TRIGGER[16];

  volatile const uint32_t RESERVED[48];
  volatile uint32_t EVENTS_TRIGGERED[16];


  volatile const uint32_t RESERVED1[112];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
} NRF_EGU_Type;
# 2213 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t UNUSED;
} NRF_SWI_Type;
# 2228 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STOP;


  volatile uint32_t TASKS_SEQSTART[2];




  volatile uint32_t TASKS_NEXTSTEP;



  volatile const uint32_t RESERVED1[60];
  volatile uint32_t EVENTS_STOPPED;

  volatile uint32_t EVENTS_SEQSTARTED[2];

  volatile uint32_t EVENTS_SEQEND[2];


  volatile uint32_t EVENTS_PWMPERIODEND;
  volatile uint32_t EVENTS_LOOPSDONE;

  volatile const uint32_t RESERVED2[56];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[125];
  volatile uint32_t ENABLE;
  volatile uint32_t MODE;
  volatile uint32_t COUNTERTOP;

  volatile uint32_t PRESCALER;
  volatile uint32_t DECODER;
  volatile uint32_t LOOP;
  volatile const uint32_t RESERVED5[2];
  volatile PWM_SEQ_Type SEQ[2];
  volatile PWM_PSEL_Type PSEL;
} NRF_PWM_Type;
# 2283 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_STARTED;
  volatile uint32_t EVENTS_STOPPED;
  volatile uint32_t EVENTS_END;


  volatile const uint32_t RESERVED1[125];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[125];
  volatile uint32_t ENABLE;
  volatile uint32_t PDMCLKCTRL;
  volatile uint32_t MODE;

  volatile const uint32_t RESERVED3[3];
  volatile uint32_t GAINL;
  volatile uint32_t GAINR;
  volatile uint32_t RATIO;

  volatile const uint32_t RESERVED4[7];
  volatile PDM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED5[6];
  volatile PDM_SAMPLE_Type SAMPLE;
} NRF_PDM_Type;
# 2323 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t RESERVED[512];
  volatile ACL_ACL_Type ACL[8];
} NRF_ACL_Type;
# 2339 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t RESERVED[256];
  volatile const uint32_t READY;
  volatile const uint32_t RESERVED1;
  volatile const uint32_t READYNEXT;
  volatile const uint32_t RESERVED2[62];
  volatile uint32_t CONFIG;

  union {
    volatile uint32_t ERASEPAGE;
    volatile uint32_t ERASEPCR1;

  };
  volatile uint32_t ERASEALL;
  volatile uint32_t ERASEPCR0;

  volatile uint32_t ERASEUICR;

  volatile uint32_t ERASEPAGEPARTIAL;

  volatile uint32_t ERASEPAGEPARTIALCFG;
  volatile const uint32_t RESERVED3[8];
  volatile uint32_t ICACHECNF;
  volatile const uint32_t RESERVED4;
  volatile uint32_t IHIT;
  volatile uint32_t IMISS;
} NRF_NVMC_Type;
# 2378 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile PPI_TASKS_CHG_Type TASKS_CHG[6];
  volatile const uint32_t RESERVED[308];
  volatile uint32_t CHEN;
  volatile uint32_t CHENSET;
  volatile uint32_t CHENCLR;
  volatile const uint32_t RESERVED1;
  volatile PPI_CH_Type CH[20];
  volatile const uint32_t RESERVED2[148];
  volatile uint32_t CHG[6];
  volatile const uint32_t RESERVED3[62];
  volatile PPI_FORK_Type FORK[32];
} NRF_PPI_Type;
# 2403 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t RESERVED[64];
  volatile MWU_EVENTS_REGION_Type EVENTS_REGION[4];
  volatile const uint32_t RESERVED1[16];
  volatile MWU_EVENTS_PREGION_Type EVENTS_PREGION[2];
  volatile const uint32_t RESERVED2[100];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t NMIEN;
  volatile uint32_t NMIENSET;
  volatile uint32_t NMIENCLR;
  volatile const uint32_t RESERVED4[53];
  volatile MWU_PERREGION_Type PERREGION[2];
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t REGIONEN;
  volatile uint32_t REGIONENSET;
  volatile uint32_t REGIONENCLR;
  volatile const uint32_t RESERVED6[57];
  volatile MWU_REGION_Type REGION[4];
  volatile const uint32_t RESERVED7[32];
  volatile MWU_PREGION_Type PREGION[2];
} NRF_MWU_Type;
# 2439 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile uint32_t TASKS_START;

  volatile uint32_t TASKS_STOP;


  volatile const uint32_t RESERVED[63];
  volatile uint32_t EVENTS_RXPTRUPD;




  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t EVENTS_TXPTRUPD;




  volatile const uint32_t RESERVED2[122];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[125];
  volatile uint32_t ENABLE;
  volatile I2S_CONFIG_Type CONFIG;
  volatile const uint32_t RESERVED4[3];
  volatile I2S_RXD_Type RXD;
  volatile const uint32_t RESERVED5;
  volatile I2S_TXD_Type TXD;
  volatile const uint32_t RESERVED6[3];
  volatile I2S_RXTXD_Type RXTXD;
  volatile const uint32_t RESERVED7[3];
  volatile I2S_PSEL_Type PSEL;
} NRF_I2S_Type;
# 2486 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t UNUSED;
} NRF_FPU_Type;
# 2501 "../../../../../../modules/nrfx/mdk/nrf52833.h"
typedef struct {
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STARTEPIN[8];



  volatile uint32_t TASKS_STARTISOIN;


  volatile uint32_t TASKS_STARTEPOUT[8];



  volatile uint32_t TASKS_STARTISOOUT;


  volatile uint32_t TASKS_EP0RCVOUT;
  volatile uint32_t TASKS_EP0STATUS;
  volatile uint32_t TASKS_EP0STALL;

  volatile uint32_t TASKS_DPDMDRIVE;

  volatile uint32_t TASKS_DPDMNODRIVE;

  volatile const uint32_t RESERVED1[40];
  volatile uint32_t EVENTS_USBRESET;

  volatile uint32_t EVENTS_STARTED;



  volatile uint32_t EVENTS_ENDEPIN[8];


  volatile uint32_t EVENTS_EP0DATADONE;

  volatile uint32_t EVENTS_ENDISOIN;

  volatile uint32_t EVENTS_ENDEPOUT[8];


  volatile uint32_t EVENTS_ENDISOOUT;

  volatile uint32_t EVENTS_SOF;

  volatile uint32_t EVENTS_USBEVENT;


  volatile uint32_t EVENTS_EP0SETUP;

  volatile uint32_t EVENTS_EPDATA;

  volatile const uint32_t RESERVED2[39];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[61];
  volatile uint32_t EVENTCAUSE;
  volatile const uint32_t RESERVED5[7];
  volatile USBD_HALTED_Type HALTED;
  volatile const uint32_t RESERVED6;
  volatile uint32_t EPSTATUS;

  volatile uint32_t EPDATASTATUS;


  volatile const uint32_t USBADDR;
  volatile const uint32_t RESERVED7[3];
  volatile const uint32_t BMREQUESTTYPE;
  volatile const uint32_t BREQUEST;
  volatile const uint32_t WVALUEL;
  volatile const uint32_t WVALUEH;
  volatile const uint32_t WINDEXL;
  volatile const uint32_t WINDEXH;
  volatile const uint32_t WLENGTHL;
  volatile const uint32_t WLENGTHH;
  volatile USBD_SIZE_Type SIZE;
  volatile const uint32_t RESERVED8[15];
  volatile uint32_t ENABLE;
  volatile uint32_t USBPULLUP;
  volatile uint32_t DPDMVALUE;



  volatile uint32_t DTOGGLE;
  volatile uint32_t EPINEN;
  volatile uint32_t EPOUTEN;
  volatile uint32_t EPSTALL;
  volatile uint32_t ISOSPLIT;
  volatile const uint32_t FRAMECNTR;

  volatile const uint32_t RESERVED9[2];
  volatile uint32_t LOWPOWER;

  volatile uint32_t ISOINCONFIG;


  volatile const uint32_t RESERVED10[51];
  volatile USBD_EPIN_Type EPIN[8];
  volatile USBD_ISOIN_Type ISOIN;
  volatile const uint32_t RESERVED11[21];
  volatile USBD_EPOUT_Type EPOUT[8];
  volatile USBD_ISOOUT_Type ISOOUT;
} NRF_USBD_Type;
# 165 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 1 "../../../../../../modules/nrfx/mdk/nrf52833_bitfields.h" 1
# 166 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 1 "../../../../../../modules/nrfx/mdk/nrf52_to_nrf52833.h" 1
# 167 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 1 "../../../../../../modules/nrfx/mdk/nrf51_to_nrf52.h" 1
# 168 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 192 "../../../../../../modules/nrfx/mdk/nrf.h"
# 1 "../../../../../../modules/nrfx/mdk/compiler_abstraction.h" 1
# 185 "../../../../../../modules/nrfx/mdk/compiler_abstraction.h"
    static inline unsigned int gcc_current_sp(void)
    {
        unsigned int stack_pointer = 0;
        __asm__ __volatile__ ("mov %0, sp" : "=r"(stack_pointer));
        return stack_pointer;
    }
# 193 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 12 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../integration/nrfx/legacy/nrf_drv_timer.h" 1
# 44 "../../../../../../integration/nrfx/legacy/nrf_drv_timer.h"
# 1 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 1
# 44 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
# 1 "../../../../../../modules/nrfx/nrfx.h" 1
# 44 "../../../../../../modules/nrfx/nrfx.h"
# 1 "../../../../../../integration/nrfx/nrfx_config.h" 1
# 45 "../../../../../../integration/nrfx/nrfx_config.h"
# 1 "../config/sdk_config.h" 1
# 46 "../../../../../../integration/nrfx/nrfx_config.h" 2
# 45 "../../../../../../modules/nrfx/nrfx.h" 2
# 1 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 1
# 45 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
# 1 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stddef.h" 1 3 4
# 41 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stddef.h" 3 4
# 1 "/usr/share/segger_embedded_studio_for_arm_5.30/include/__crossworks.h" 1 3 4
# 70 "/usr/share/segger_embedded_studio_for_arm_5.30/include/__crossworks.h" 3 4

# 70 "/usr/share/segger_embedded_studio_for_arm_5.30/include/__crossworks.h" 3 4
typedef __builtin_va_list __va_list;
# 124 "/usr/share/segger_embedded_studio_for_arm_5.30/include/__crossworks.h" 3 4
struct __mbstate_s {
  int __state;
  long __wchar;
};

typedef int (__RAL_mb_encode_t)(char *s, unsigned int wc, struct __mbstate_s *codec);
typedef int (__RAL_mb_decode_t)(unsigned int *pwc, const char *s, unsigned len, struct __mbstate_s *codec);

typedef struct {

  const char *decimal_point;
  const char *thousands_sep;
  const char *grouping;

  const char *int_curr_symbol;
  const char *currency_symbol;
  const char *mon_decimal_point;
  const char *mon_thousands_sep;
  const char *mon_grouping;
  const char *positive_sign;
  const char *negative_sign;

  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_p_cs_precedes;
  char int_n_cs_precedes;
  char int_p_sep_by_space;
  char int_n_sep_by_space;
  char int_p_sign_posn;
  char int_n_sign_posn;




  const char *day_names;
  const char *abbrev_day_names;
  const char *month_names;
  const char *abbrev_month_names;
  const char *am_pm_indicator;
  const char *date_format;
  const char *time_format;
  const char *date_time_format;
} __RAL_locale_data_t;

enum {
  __RAL_WC_ALNUM = 1,
  __RAL_WC_ALPHA,
  __RAL_WC_CNTRL,
  __RAL_WC_DIGIT,
  __RAL_WC_GRAPH,
  __RAL_WC_LOWER,
  __RAL_WC_UPPER,
  __RAL_WC_SPACE,
  __RAL_WC_PRINT,
  __RAL_WC_PUNCT,
  __RAL_WC_BLANK,
  __RAL_WC_XDIGIT
};

enum {
  __RAL_WT_TOLOWER = 1,
  __RAL_WT_TOUPPER
};

typedef struct {

  int (*__isctype)(int, int);
  int (*__toupper)(int);
  int (*__tolower)(int);


  int (*__iswctype)(long, int);
  long (*__towupper)(long);
  long (*__towlower)(long);


  int (*__wctomb)(char *s, unsigned int wc, struct __mbstate_s *state);
  int (*__mbtowc)(unsigned int *pwc, const char *s, unsigned len, struct __mbstate_s *state);
} __RAL_locale_codeset_t;

typedef struct {
  const char *name;
  const __RAL_locale_data_t *data;
  const __RAL_locale_codeset_t *codeset;
} __RAL_locale_t;



typedef struct __locale_s {
  const __RAL_locale_t *__category[5];
} *__locale_t;


const __RAL_locale_t *__user_find_locale(const char *locale);
# 237 "/usr/share/segger_embedded_studio_for_arm_5.30/include/__crossworks.h" 3 4
const __RAL_locale_t *__RAL_find_locale(const char *locale);







const __RAL_locale_t *__RAL_global_locale_category(int __category);







const __RAL_locale_t *__RAL_locale_category(__locale_t __locale, int __category);






extern struct __locale_s __RAL_global_locale;






extern const __RAL_locale_t __RAL_c_locale;


extern const __RAL_locale_codeset_t __RAL_codeset_ascii;
extern const __RAL_locale_codeset_t __RAL_codeset_utf8;

extern const unsigned char __RAL_ascii_ctype_map[128];

extern const char __RAL_c_locale_day_names[];
extern const char __RAL_c_locale_abbrev_day_names[];
extern const char __RAL_c_locale_month_names[];
extern const char __RAL_c_locale_abbrev_month_names[];

extern const char __RAL_data_utf8_period[];
extern const char __RAL_data_utf8_comma[];
extern const char __RAL_data_utf8_space[];
extern const char __RAL_data_utf8_plus[];
extern const char __RAL_data_utf8_minus[];
extern const char __RAL_data_empty_string[];

const char *__RAL_string_list_decode(const char *str, int index);
int __RAL_string_list_encode(const char *list, const char *str);


void __RAL_init_mbstate(struct __mbstate_s *state);

int __RAL_ascii_wctomb(char *s, unsigned int wc, struct __mbstate_s *state);
int __RAL_ascii_mbtowc(unsigned int *pwc, const char *s, unsigned len, struct __mbstate_s *state);

int __RAL_utf8_wctomb(char *s, unsigned int wc, struct __mbstate_s *state);
int __RAL_utf8_mbtowc(unsigned int *pwc, const char *s, unsigned len, struct __mbstate_s *state);

int __RAL_mb_max(const struct __locale_s *loc);

struct timeval;


int __RAL_compare_locale_name(const char *str0, const char *str1);


extern int (*__user_set_time_of_day)(const struct timeval *tp);
extern int (*__user_get_time_of_day)(struct timeval *tp);


typedef struct { unsigned short min, max, map; } __RAL_unicode_map_bmp_range_t;
typedef struct { unsigned short cp, map; } __RAL_unicode_map_bmp_singleton_t;


typedef struct { unsigned short min, max; } __RAL_unicode_set_bmp_range_t;
typedef struct { long min, max; } __RAL_unicode_set_nonbmp_range_t;


int __RAL_unicode_iswctype(long ch, int ty);
long __RAL_unicode_towupper(long ch);
long __RAL_unicode_towlower(long ch);


int __RAL_unicode_map_range_search(const void *k0, const void *k1);
int __RAL_unicode_map_singleton_search(const void *k0, const void *k1);


int __RAL_unicode_set_bmp_range_search(const void *k0, const void *k1);
int __RAL_unicode_set_nonbmp_range_search(const void *k0, const void *k1);

typedef const char * (*__RAL_error_decoder_fn_t)(int error);

typedef struct __RAL_error_decoder_s
{
  __RAL_error_decoder_fn_t decode;
  struct __RAL_error_decoder_s *next;
} __RAL_error_decoder_t;

void __RAL_register_error_decoder(__RAL_error_decoder_t *decoder);

extern __RAL_error_decoder_t *__RAL_error_decoder_head;

const char *__RAL_decode_error(int num);
# 42 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stddef.h" 2 3 4







typedef unsigned size_t;






typedef int ptrdiff_t;
# 71 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 95 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stddef.h" 3 4
typedef long double max_align_t;
# 46 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 2



# 1 "../../../../../../modules/nrfx/mdk/nrf_peripherals.h" 1
# 61 "../../../../../../modules/nrfx/mdk/nrf_peripherals.h"
# 1 "../../../../../../modules/nrfx/mdk/nrf52833_peripherals.h" 1
# 62 "../../../../../../modules/nrfx/mdk/nrf_peripherals.h" 2
# 50 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 2
# 224 "../../../../../../modules/nrfx/drivers/nrfx_common.h"

# 224 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
typedef void (* nrfx_irq_handler_t)(void);


typedef enum
{
    NRFX_DRV_STATE_UNINITIALIZED,
    NRFX_DRV_STATE_INITIALIZED,
    NRFX_DRV_STATE_POWERED_ON,
} nrfx_drv_state_t;
# 247 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline 
# 247 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 3 4
               _Bool 
# 247 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
                    nrfx_is_in_ram(void const * p_object);
# 261 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline 
# 261 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 3 4
               _Bool 
# 261 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
                    nrfx_is_word_aligned(void const * p_object);
# 270 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline IRQn_Type nrfx_get_irq_number(void const * p_reg);
# 286 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline uint32_t nrfx_bitpos_to_event(uint32_t bit);
# 302 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline uint32_t nrfx_event_to_bitpos(uint32_t event);




static inline 
# 307 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 3 4
               _Bool 
# 307 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
                    nrfx_is_in_ram(void const * p_object)
{
    return ((((uint32_t)p_object) & 0xE0000000u) == 0x20000000u);
}

static inline 
# 312 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 3 4
               _Bool 
# 312 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
                    nrfx_is_word_aligned(void const * p_object)
{
    return ((((uint32_t)p_object) & 0x3u) == 0u);
}

static inline IRQn_Type nrfx_get_irq_number(void const * p_reg)
{
    return (IRQn_Type)(uint8_t)((uint32_t)(p_reg) >> 12);
}

static inline uint32_t nrfx_bitpos_to_event(uint32_t bit)
{
    static const uint32_t event_reg_offset = 0x100u;
    return event_reg_offset + (bit * sizeof(uint32_t));
}

static inline uint32_t nrfx_event_to_bitpos(uint32_t event)
{
    static const uint32_t event_reg_offset = 0x100u;
    return (event - event_reg_offset) / sizeof(uint32_t);
}
# 46 "../../../../../../modules/nrfx/nrfx.h" 2
# 1 "../../../../../../integration/nrfx/nrfx_glue.h" 1
# 57 "../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../integration/nrfx/legacy/apply_old_config.h" 1
# 58 "../../../../../../integration/nrfx/nrfx_glue.h" 2

# 1 "../../../../../../modules/nrfx/soc/nrfx_irqs.h" 1
# 55 "../../../../../../modules/nrfx/soc/nrfx_irqs.h"
# 1 "../../../../../../modules/nrfx/soc/nrfx_irqs_nrf52833.h" 1
# 56 "../../../../../../modules/nrfx/soc/nrfx_irqs.h" 2
# 60 "../../../../../../integration/nrfx/nrfx_glue.h" 2



# 1 "../../../../../../components/libraries/util/nrf_assert.h" 1
# 75 "../../../../../../components/libraries/util/nrf_assert.h"
void assert_nrf_callback(uint16_t line_num, const uint8_t *file_name);
# 64 "../../../../../../integration/nrfx/nrfx_glue.h" 2







# 1 "../../../../../../components/libraries/util/app_util.h" 1
# 55 "../../../../../../components/libraries/util/app_util.h"
# 1 "../../../../../../modules/nrfx/mdk/compiler_abstraction.h" 1
# 56 "../../../../../../components/libraries/util/app_util.h" 2
# 1 "../../../../../../components/libraries/util/nordic_common.h" 1
# 57 "../../../../../../components/libraries/util/app_util.h" 2
# 83 "../../../../../../components/libraries/util/app_util.h"
extern uint32_t __StackTop;
extern uint32_t __StackLimit;
# 114 "../../../../../../components/libraries/util/app_util.h"
extern uint32_t * _vectors;
extern uint32_t __FLASH_segment_used_end__;
# 133 "../../../../../../components/libraries/util/app_util.h"
# 1 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h" 1
# 50 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h"
# 1 "../../../../../../components/softdevice/s113/headers/nrf_svc.h" 1
# 51 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h" 2
# 89 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h"
enum NRF_MBR_SVCS
{
  SD_MBR_COMMAND = (0x18),
};


enum NRF_MBR_COMMANDS
{
  SD_MBR_COMMAND_COPY_BL,
  SD_MBR_COMMAND_COPY_SD,
  SD_MBR_COMMAND_INIT_SD,
  SD_MBR_COMMAND_COMPARE,
  SD_MBR_COMMAND_VECTOR_TABLE_BASE_SET,
  SD_MBR_COMMAND_RESERVED,
  SD_MBR_COMMAND_IRQ_FORWARD_ADDRESS_SET,
};
# 122 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h"
typedef struct
{
  uint32_t *src;
  uint32_t *dst;
  uint32_t len;
} sd_mbr_command_copy_sd_t;







typedef struct
{
  uint32_t *ptr1;
  uint32_t *ptr2;
  uint32_t len;
} sd_mbr_command_compare_t;
# 165 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h"
typedef struct
{
  uint32_t *bl_src;
  uint32_t bl_len;
} sd_mbr_command_copy_bl_t;
# 193 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h"
typedef struct
{
  uint32_t address;
} sd_mbr_command_vector_table_base_set_t;
# 205 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h"
typedef struct
{
  uint32_t address;
} sd_mbr_command_irq_forward_address_set_t;







typedef struct
{
  uint32_t command;
  union
  {
    sd_mbr_command_copy_sd_t copy_sd;
    sd_mbr_command_compare_t compare;
    sd_mbr_command_copy_bl_t copy_bl;
    sd_mbr_command_vector_table_base_set_t base_set;
    sd_mbr_command_irq_forward_address_set_t irq_forward_address_set;
  } params;
} sd_mbr_command_t;
# 257 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h"

# 257 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h"
#pragma GCC diagnostic push
# 257 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h"

# 257 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 257 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_mbr_command(sd_mbr_command_t* param) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_MBR_COMMAND) : "r0" ); }
# 257 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h"
#pragma GCC diagnostic pop
# 257 "../../../../../../components/softdevice/s113/headers/nrf52/nrf_mbr.h"
 ;
# 134 "../../../../../../components/libraries/util/app_util.h" 2







enum
{
    UNIT_0_625_MS = 625,
    UNIT_1_25_MS = 1250,
    UNIT_10_MS = 10000
};
# 316 "../../../../../../components/libraries/util/app_util.h"
typedef uint8_t uint16_le_t[2];


typedef uint8_t uint32_le_t[4];


typedef struct
{
    uint16_t size;
    uint8_t * p_data;
} uint8_array_t;
# 1023 "../../../../../../components/libraries/util/app_util.h"
static inline uint64_t value_rescale(uint32_t value, uint32_t old_unit_reversal, uint16_t new_unit_reversal)
{
    return (uint64_t)((((uint64_t)value * new_unit_reversal) + ((old_unit_reversal) / 2)) / (old_unit_reversal));
}
# 1035 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint16_encode(uint16_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x00FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0xFF00) >> 8);
    return sizeof(uint16_t);
}
# 1049 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint24_encode(uint32_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x0000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x00FF0000) >> 16);
    return 3;
}
# 1064 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint32_encode(uint32_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x0000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x00FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0xFF000000) >> 24);
    return sizeof(uint32_t);
}
# 1080 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint40_encode(uint64_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x00000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x000000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x0000FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0x00FF000000) >> 24);
    p_encoded_data[4] = (uint8_t) ((value & 0xFF00000000) >> 32);
    return 5;
}
# 1097 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint48_encode(uint64_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x0000000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x00000000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x000000FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0x0000FF000000) >> 24);
    p_encoded_data[4] = (uint8_t) ((value & 0x00FF00000000) >> 32);
    p_encoded_data[5] = (uint8_t) ((value & 0xFF0000000000) >> 40);
    return 6;
}







static inline uint16_t uint16_decode(const uint8_t * p_encoded_data)
{
        return ( (((uint16_t)((uint8_t *)p_encoded_data)[0])) |
                 (((uint16_t)((uint8_t *)p_encoded_data)[1]) << 8 ));
}







static inline uint16_t uint16_big_decode(const uint8_t * p_encoded_data)
{
        return ( (((uint16_t)((uint8_t *)p_encoded_data)[0]) << 8 ) |
                 (((uint16_t)((uint8_t *)p_encoded_data)[1])) );
}







static inline uint32_t uint24_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint32_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint32_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint32_t)((uint8_t *)p_encoded_data)[2]) << 16));
}







static inline uint32_t uint32_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint32_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint32_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint32_t)((uint8_t *)p_encoded_data)[2]) << 16) |
             (((uint32_t)((uint8_t *)p_encoded_data)[3]) << 24 ));
}







static inline uint32_t uint32_big_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint32_t)((uint8_t *)p_encoded_data)[0]) << 24) |
             (((uint32_t)((uint8_t *)p_encoded_data)[1]) << 16) |
             (((uint32_t)((uint8_t *)p_encoded_data)[2]) << 8) |
             (((uint32_t)((uint8_t *)p_encoded_data)[3]) << 0) );
}
# 1181 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint16_big_encode(uint16_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) (value >> 8);
    p_encoded_data[1] = (uint8_t) (value & 0xFF);

    return sizeof(uint16_t);
}
# 1199 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint32_big_encode(uint32_t value, uint8_t * p_encoded_data)
{
    *(uint32_t *)p_encoded_data = __REV(value);
    return sizeof(uint32_t);
}







static inline uint64_t uint40_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint64_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint64_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint64_t)((uint8_t *)p_encoded_data)[2]) << 16) |
             (((uint64_t)((uint8_t *)p_encoded_data)[3]) << 24) |
             (((uint64_t)((uint8_t *)p_encoded_data)[4]) << 32 ));
}







static inline uint64_t uint48_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint64_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint64_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint64_t)((uint8_t *)p_encoded_data)[2]) << 16) |
             (((uint64_t)((uint8_t *)p_encoded_data)[3]) << 24) |
             (((uint64_t)((uint8_t *)p_encoded_data)[4]) << 32) |
             (((uint64_t)((uint8_t *)p_encoded_data)[5]) << 40 ));
}
# 1256 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t battery_level_in_percent(const uint16_t mvolts)
{
    uint8_t battery_level;

    if (mvolts >= 3000)
    {
        battery_level = 100;
    }
    else if (mvolts > 2900)
    {
        battery_level = 100 - ((3000 - mvolts) * 58) / 100;
    }
    else if (mvolts > 2740)
    {
        battery_level = 42 - ((2900 - mvolts) * 24) / 160;
    }
    else if (mvolts > 2440)
    {
        battery_level = 18 - ((2740 - mvolts) * 12) / 300;
    }
    else if (mvolts > 2100)
    {
        battery_level = 6 - ((2440 - mvolts) * 6) / 340;
    }
    else
    {
        battery_level = 0;
    }

    return battery_level;
}







static inline 
# 1294 "../../../../../../components/libraries/util/app_util.h" 3 4
               _Bool 
# 1294 "../../../../../../components/libraries/util/app_util.h"
                    is_word_aligned(void const* p)
{
    return (((uintptr_t)p & 0x03) == 0);
}
# 1307 "../../../../../../components/libraries/util/app_util.h"
static inline 
# 1307 "../../../../../../components/libraries/util/app_util.h" 3 4
               _Bool 
# 1307 "../../../../../../components/libraries/util/app_util.h"
                    is_address_from_stack(void * ptr)
{
    if (((uint32_t)ptr >= (uint32_t)&__StackLimit) &&
        ((uint32_t)ptr < (uint32_t)&__StackTop) )
    {
        return 
# 1312 "../../../../../../components/libraries/util/app_util.h" 3 4
              1
# 1312 "../../../../../../components/libraries/util/app_util.h"
                  ;
    }
    else
    {
        return 
# 1316 "../../../../../../components/libraries/util/app_util.h" 3 4
              0
# 1316 "../../../../../../components/libraries/util/app_util.h"
                   ;
    }
}
# 72 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 104 "../../../../../../integration/nrfx/nrfx_glue.h"
static inline void _NRFX_IRQ_PRIORITY_SET(IRQn_Type irq_number,
                                          uint8_t priority)
{
    if (0) { if (((((priority) > 1) && ((priority) < 4)) || (((priority) > 4) && ((priority) < 8)))) { } else { assert_nrf_callback((uint16_t)107, (uint8_t *)"../../../../../../integration/nrfx/nrfx_glue.h"); } };
    __NVIC_SetPriority(irq_number, priority);
}







static inline void _NRFX_IRQ_ENABLE(IRQn_Type irq_number)
{
    __NVIC_EnableIRQ(irq_number);
}
# 131 "../../../../../../integration/nrfx/nrfx_glue.h"
static inline 
# 131 "../../../../../../integration/nrfx/nrfx_glue.h" 3 4
             _Bool 
# 131 "../../../../../../integration/nrfx/nrfx_glue.h"
                  _NRFX_IRQ_IS_ENABLED(IRQn_Type irq_number)
{
    return 0 != (((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[irq_number / 32] & (1UL << (irq_number % 32)));
}







static inline void _NRFX_IRQ_DISABLE(IRQn_Type irq_number)
{
    __NVIC_DisableIRQ(irq_number);
}







static inline void _NRFX_IRQ_PENDING_SET(IRQn_Type irq_number)
{
    __NVIC_SetPendingIRQ(irq_number);
}







static inline void _NRFX_IRQ_PENDING_CLEAR(IRQn_Type irq_number)
{
    __NVIC_ClearPendingIRQ(irq_number);
}
# 176 "../../../../../../integration/nrfx/nrfx_glue.h"
static inline 
# 176 "../../../../../../integration/nrfx/nrfx_glue.h" 3 4
             _Bool 
# 176 "../../../../../../integration/nrfx/nrfx_glue.h"
                  _NRFX_IRQ_IS_PENDING(IRQn_Type irq_number)
{
    return (__NVIC_GetPendingIRQ(irq_number) == 1);
}

# 1 "../../../../../../components/libraries/util/nordic_common.h" 1
# 182 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 1 "../../../../../../components/libraries/util/app_util_platform.h" 1
# 56 "../../../../../../components/libraries/util/app_util_platform.h"
# 1 "../../../../../../components/softdevice/s113/headers/nrf_soc.h" 1
# 52 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
# 1 "../../../../../../components/softdevice/s113/headers/nrf_svc.h" 1
# 53 "../../../../../../components/softdevice/s113/headers/nrf_soc.h" 2
# 1 "../../../../../../components/softdevice/s113/headers/nrf_error.h" 1
# 54 "../../../../../../components/softdevice/s113/headers/nrf_soc.h" 2
# 1 "../../../../../../components/softdevice/s113/headers/nrf_error_soc.h" 1
# 55 "../../../../../../components/softdevice/s113/headers/nrf_soc.h" 2
# 135 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
enum NRF_SOC_SVCS
{
  SD_PPI_CHANNEL_ENABLE_GET = (0x20),
  SD_PPI_CHANNEL_ENABLE_SET = (0x20) + 1,
  SD_PPI_CHANNEL_ENABLE_CLR = (0x20) + 2,
  SD_PPI_CHANNEL_ASSIGN = (0x20) + 3,
  SD_PPI_GROUP_TASK_ENABLE = (0x20) + 4,
  SD_PPI_GROUP_TASK_DISABLE = (0x20) + 5,
  SD_PPI_GROUP_ASSIGN = (0x20) + 6,
  SD_PPI_GROUP_GET = (0x20) + 7,
  SD_FLASH_PAGE_ERASE = (0x20) + 8,
  SD_FLASH_WRITE = (0x20) + 9,
  SD_FLASH_PROTECT = (0x20) + 10,
  SD_PROTECTED_REGISTER_WRITE = (0x20) + 11,
  SD_MUTEX_NEW = (0x2C),
  SD_MUTEX_ACQUIRE = (0x2C) + 1,
  SD_MUTEX_RELEASE = (0x2C) + 2,
  SD_RAND_APPLICATION_POOL_CAPACITY_GET = (0x2C) + 3,
  SD_RAND_APPLICATION_BYTES_AVAILABLE_GET = (0x2C) + 4,
  SD_RAND_APPLICATION_VECTOR_GET = (0x2C) + 5,
  SD_POWER_MODE_SET = (0x2C) + 6,
  SD_POWER_SYSTEM_OFF = (0x2C) + 7,
  SD_POWER_RESET_REASON_GET = (0x2C) + 8,
  SD_POWER_RESET_REASON_CLR = (0x2C) + 9,
  SD_POWER_POF_ENABLE = (0x2C) + 10,
  SD_POWER_POF_THRESHOLD_SET = (0x2C) + 11,
  SD_POWER_RAM_POWER_SET = (0x2C) + 13,
  SD_POWER_RAM_POWER_CLR = (0x2C) + 14,
  SD_POWER_RAM_POWER_GET = (0x2C) + 15,
  SD_POWER_GPREGRET_SET = (0x2C) + 16,
  SD_POWER_GPREGRET_CLR = (0x2C) + 17,
  SD_POWER_GPREGRET_GET = (0x2C) + 18,
  SD_POWER_DCDC_MODE_SET = (0x2C) + 19,
  SD_APP_EVT_WAIT = (0x2C) + 21,
  SD_CLOCK_HFCLK_REQUEST = (0x2C) + 22,
  SD_CLOCK_HFCLK_RELEASE = (0x2C) + 23,
  SD_CLOCK_HFCLK_IS_RUNNING = (0x2C) + 24,
  SD_RADIO_NOTIFICATION_CFG_SET = (0x2C) + 25,
  SD_ECB_BLOCK_ENCRYPT = (0x2C) + 26,
  SD_ECB_BLOCKS_ENCRYPT = (0x2C) + 27,
  SD_RADIO_SESSION_OPEN = (0x2C) + 28,
  SD_RADIO_SESSION_CLOSE = (0x2C) + 29,
  SD_RADIO_REQUEST = (0x2C) + 30,
  SD_EVT_GET = (0x2C) + 31,
  SD_TEMP_GET = (0x2C) + 32,
  SD_POWER_USBPWRRDY_ENABLE = (0x2C) + 33,
  SD_POWER_USBDETECTED_ENABLE = (0x2C) + 34,
  SD_POWER_USBREMOVED_ENABLE = (0x2C) + 35,
  SD_POWER_USBREGSTATUS_GET = (0x2C) + 36,
  SVC_SOC_LAST = (0x2C) + 37
};


enum NRF_MUTEX_VALUES
{
  NRF_MUTEX_FREE,
  NRF_MUTEX_TAKEN
};


enum NRF_POWER_MODES
{
  NRF_POWER_MODE_CONSTLAT,
  NRF_POWER_MODE_LOWPWR
};



enum NRF_POWER_THRESHOLDS
{
  NRF_POWER_THRESHOLD_V17 = 4UL,
  NRF_POWER_THRESHOLD_V18,
  NRF_POWER_THRESHOLD_V19,
  NRF_POWER_THRESHOLD_V20,
  NRF_POWER_THRESHOLD_V21,
  NRF_POWER_THRESHOLD_V22,
  NRF_POWER_THRESHOLD_V23,
  NRF_POWER_THRESHOLD_V24,
  NRF_POWER_THRESHOLD_V25,
  NRF_POWER_THRESHOLD_V26,
  NRF_POWER_THRESHOLD_V27,
  NRF_POWER_THRESHOLD_V28
};




enum NRF_POWER_DCDC_MODES
{
  NRF_POWER_DCDC_DISABLE,
  NRF_POWER_DCDC_ENABLE
};


enum NRF_RADIO_NOTIFICATION_DISTANCES
{
  NRF_RADIO_NOTIFICATION_DISTANCE_NONE = 0,
  NRF_RADIO_NOTIFICATION_DISTANCE_800US,
  NRF_RADIO_NOTIFICATION_DISTANCE_1740US,
  NRF_RADIO_NOTIFICATION_DISTANCE_2680US,
  NRF_RADIO_NOTIFICATION_DISTANCE_3620US,
  NRF_RADIO_NOTIFICATION_DISTANCE_4560US,
  NRF_RADIO_NOTIFICATION_DISTANCE_5500US
};



enum NRF_RADIO_NOTIFICATION_TYPES
{
  NRF_RADIO_NOTIFICATION_TYPE_NONE = 0,
  NRF_RADIO_NOTIFICATION_TYPE_INT_ON_ACTIVE,
  NRF_RADIO_NOTIFICATION_TYPE_INT_ON_INACTIVE,
  NRF_RADIO_NOTIFICATION_TYPE_INT_ON_BOTH,
};


enum NRF_RADIO_CALLBACK_SIGNAL_TYPE
{
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_START,
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_TIMER0,
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_RADIO,
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_EXTEND_FAILED,
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_EXTEND_SUCCEEDED
};






enum NRF_RADIO_SIGNAL_CALLBACK_ACTION
{
  NRF_RADIO_SIGNAL_CALLBACK_ACTION_NONE,
  NRF_RADIO_SIGNAL_CALLBACK_ACTION_EXTEND,





  NRF_RADIO_SIGNAL_CALLBACK_ACTION_END,
  NRF_RADIO_SIGNAL_CALLBACK_ACTION_REQUEST_AND_END
};


enum NRF_RADIO_HFCLK_CFG
{
  NRF_RADIO_HFCLK_CFG_XTAL_GUARANTEED,






  NRF_RADIO_HFCLK_CFG_NO_GUARANTEE




};


enum NRF_RADIO_PRIORITY
{
  NRF_RADIO_PRIORITY_HIGH,
  NRF_RADIO_PRIORITY_NORMAL,
};


enum NRF_RADIO_REQUEST_TYPE
{
  NRF_RADIO_REQ_TYPE_EARLIEST,
  NRF_RADIO_REQ_TYPE_NORMAL
};


enum NRF_SOC_EVTS
{
  NRF_EVT_HFCLKSTARTED,
  NRF_EVT_POWER_FAILURE_WARNING,
  NRF_EVT_FLASH_OPERATION_SUCCESS,
  NRF_EVT_FLASH_OPERATION_ERROR,
  NRF_EVT_RADIO_BLOCKED,
  NRF_EVT_RADIO_CANCELED,
  NRF_EVT_RADIO_SIGNAL_CALLBACK_INVALID_RETURN,
  NRF_EVT_RADIO_SESSION_IDLE,
  NRF_EVT_RADIO_SESSION_CLOSED,
  NRF_EVT_POWER_USB_POWER_READY,
  NRF_EVT_POWER_USB_DETECTED,
  NRF_EVT_POWER_USB_REMOVED,
  NRF_EVT_NUMBER_OF_EVTS
};
# 336 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
typedef volatile uint8_t nrf_mutex_t;


typedef struct
{
  uint8_t hfclk;
  uint8_t priority;
  uint32_t length_us;
  uint32_t timeout_us;
} nrf_radio_request_earliest_t;


typedef struct
{
  uint8_t hfclk;
  uint8_t priority;
  uint32_t distance_us;
  uint32_t length_us;
} nrf_radio_request_normal_t;


typedef struct
{
  uint8_t request_type;
  union
  {
    nrf_radio_request_earliest_t earliest;
    nrf_radio_request_normal_t normal;
  } params;
} nrf_radio_request_t;


typedef struct
{
  uint8_t callback_action;
  union
  {
    struct
    {
      nrf_radio_request_t * p_next;
    } request;
    struct
    {
      uint32_t length_us;
    } extend;
  } params;
} nrf_radio_signal_callback_return_param_t;
# 396 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
typedef nrf_radio_signal_callback_return_param_t * (*nrf_radio_signal_callback_t) (uint8_t signal_type);


typedef uint8_t soc_ecb_key_t[(16)];
typedef uint8_t soc_ecb_cleartext_t[(16)];
typedef uint8_t soc_ecb_ciphertext_t[((16))];


typedef struct
{
  soc_ecb_key_t key;
  soc_ecb_cleartext_t cleartext;
  soc_ecb_ciphertext_t ciphertext;
} nrf_ecb_hal_data_t;



typedef struct
{
  soc_ecb_key_t const * p_key;
  soc_ecb_cleartext_t const * p_cleartext;
  soc_ecb_ciphertext_t * p_ciphertext;
} nrf_ecb_hal_data_block_t;
# 431 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 431 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 431 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 431 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 431 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_mutex_new(nrf_mutex_t * p_mutex) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_MUTEX_NEW) : "r0" ); }
# 431 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 431 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 440 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 440 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 440 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 440 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 440 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_mutex_acquire(nrf_mutex_t * p_mutex) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_MUTEX_ACQUIRE) : "r0" ); }
# 440 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 440 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;








# 448 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 448 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 448 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 448 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_mutex_release(nrf_mutex_t * p_mutex) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_MUTEX_RELEASE) : "r0" ); }
# 448 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 448 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;








# 456 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 456 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 456 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 456 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_rand_application_pool_capacity_get(uint8_t * p_pool_capacity) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RAND_APPLICATION_POOL_CAPACITY_GET) : "r0" ); }
# 456 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 456 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;








# 464 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 464 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 464 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 464 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_rand_application_bytes_available_get(uint8_t * p_bytes_available) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RAND_APPLICATION_BYTES_AVAILABLE_GET) : "r0" ); }
# 464 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 464 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 474 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 474 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 474 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 474 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 474 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_rand_application_vector_get(uint8_t * p_buff, uint8_t length) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RAND_APPLICATION_VECTOR_GET) : "r0" ); }
# 474 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 474 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;








# 482 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 482 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 482 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 482 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_reset_reason_get(uint32_t * p_reset_reason) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RESET_REASON_GET) : "r0" ); }
# 482 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 482 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;








# 490 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 490 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 490 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 490 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_reset_reason_clr(uint32_t reset_reason_clr_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RESET_REASON_CLR) : "r0" ); }
# 490 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 490 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 499 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 499 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 499 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 499 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 499 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_mode_set(uint8_t power_mode) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_MODE_SET) : "r0" ); }
# 499 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 499 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;






# 505 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 505 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 505 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 505 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_system_off(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_SYSTEM_OFF) : "r0" ); }
# 505 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 505 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 516 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 516 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 516 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 516 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 516 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_pof_enable(uint8_t pof_enable) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_POF_ENABLE) : "r0" ); }
# 516 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 516 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 529 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 529 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 529 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 529 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 529 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_usbpwrrdy_enable(uint8_t usbpwrrdy_enable) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_USBPWRRDY_ENABLE) : "r0" ); }
# 529 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 529 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 542 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 542 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 542 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 542 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 542 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_usbdetected_enable(uint8_t usbdetected_enable) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_USBDETECTED_ENABLE) : "r0" ); }
# 542 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 542 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 555 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 555 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 555 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 555 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 555 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_usbremoved_enable(uint8_t usbremoved_enable) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_USBREMOVED_ENABLE) : "r0" ); }
# 555 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 555 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 565 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 565 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 565 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 565 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 565 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_usbregstatus_get(uint32_t * usbregstatus) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_USBREGSTATUS_GET) : "r0" ); }
# 565 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 565 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 575 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 575 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 575 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 575 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 575 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_pof_threshold_set(uint8_t threshold) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_POF_THRESHOLD_SET) : "r0" ); }
# 575 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 575 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 585 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 585 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 585 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 585 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 585 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_ram_power_set(uint8_t index, uint32_t ram_powerset) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RAM_POWER_SET) : "r0" ); }
# 585 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 585 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 594 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 594 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 594 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 594 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 594 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_ram_power_clr(uint8_t index, uint32_t ram_powerclr) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RAM_POWER_CLR) : "r0" ); }
# 594 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 594 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 603 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 603 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 603 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 603 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 603 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_ram_power_get(uint8_t index, uint32_t * p_ram_power) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RAM_POWER_GET) : "r0" ); }
# 603 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 603 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 612 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 612 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 612 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 612 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 612 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_gpregret_set(uint32_t gpregret_id, uint32_t gpregret_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_GPREGRET_SET) : "r0" ); }
# 612 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 612 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 621 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 621 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 621 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 621 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 621 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_gpregret_clr(uint32_t gpregret_id, uint32_t gpregret_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_GPREGRET_CLR) : "r0" ); }
# 621 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 621 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 630 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 630 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 630 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 630 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 630 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_gpregret_get(uint32_t gpregret_id, uint32_t *p_gpregret) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_GPREGRET_GET) : "r0" ); }
# 630 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 630 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 639 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 639 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 639 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 639 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 639 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_dcdc_mode_set(uint8_t dcdc_mode) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_DCDC_MODE_SET) : "r0" ); }
# 639 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 639 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 652 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 652 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 652 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 652 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 652 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_clock_hfclk_request(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_CLOCK_HFCLK_REQUEST) : "r0" ); }
# 652 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 652 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 663 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 663 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 663 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 663 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 663 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_clock_hfclk_release(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_CLOCK_HFCLK_RELEASE) : "r0" ); }
# 663 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 663 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 674 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 674 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 674 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 674 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 674 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_clock_hfclk_is_running(uint32_t * p_is_running) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_CLOCK_HFCLK_IS_RUNNING) : "r0" ); }
# 674 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 674 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 702 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 702 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 702 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 702 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 702 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_app_evt_wait(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_APP_EVT_WAIT) : "r0" ); }
# 702 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 702 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;








# 710 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 710 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 710 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 710 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_channel_enable_get(uint32_t * p_channel_enable) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_CHANNEL_ENABLE_GET) : "r0" ); }
# 710 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 710 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;








# 718 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 718 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 718 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 718 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_channel_enable_set(uint32_t channel_enable_set_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_CHANNEL_ENABLE_SET) : "r0" ); }
# 718 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 718 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;








# 726 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 726 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 726 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 726 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_channel_enable_clr(uint32_t channel_enable_clr_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_CHANNEL_ENABLE_CLR) : "r0" ); }
# 726 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 726 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 737 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 737 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 737 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 737 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 737 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_channel_assign(uint8_t channel_num, const volatile void * evt_endpoint, const volatile void * task_endpoint) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_CHANNEL_ASSIGN) : "r0" ); }
# 737 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 737 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 746 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 746 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 746 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 746 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 746 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_group_task_enable(uint8_t group_num) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_GROUP_TASK_ENABLE) : "r0" ); }
# 746 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 746 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 755 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 755 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 755 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 755 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 755 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_group_task_disable(uint8_t group_num) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_GROUP_TASK_DISABLE) : "r0" ); }
# 755 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 755 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 765 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 765 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 765 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 765 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 765 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_group_assign(uint8_t group_num, uint32_t channel_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_GROUP_ASSIGN) : "r0" ); }
# 765 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 765 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 775 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 775 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 775 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 775 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 775 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_group_get(uint8_t group_num, uint32_t * p_channel_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_GROUP_GET) : "r0" ); }
# 775 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 775 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 806 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 806 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 806 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 806 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 806 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_radio_notification_cfg_set(uint8_t type, uint8_t distance) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RADIO_NOTIFICATION_CFG_SET) : "r0" ); }
# 806 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 806 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 822 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 822 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 822 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 822 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 822 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ecb_block_encrypt(nrf_ecb_hal_data_t * p_ecb_data) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_ECB_BLOCK_ENCRYPT) : "r0" ); }
# 822 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 822 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 839 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 839 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 839 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 839 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 839 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ecb_blocks_encrypt(uint8_t block_count, nrf_ecb_hal_data_block_t * p_data_blocks) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_ECB_BLOCKS_ENCRYPT) : "r0" ); }
# 839 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 839 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 850 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 850 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 850 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 850 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 850 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_evt_get(uint32_t * p_evt_id) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_EVT_GET) : "r0" ); }
# 850 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 850 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 861 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 861 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 861 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 861 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 861 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_temp_get(int32_t * p_temp) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_TEMP_GET) : "r0" ); }
# 861 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 861 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 898 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 898 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 898 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 898 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 898 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_flash_write(uint32_t * p_dst, uint32_t const * p_src, uint32_t size) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_FLASH_WRITE) : "r0" ); }
# 898 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 898 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 930 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 930 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 930 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 930 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 930 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_flash_page_erase(uint32_t page_number) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_FLASH_PAGE_ERASE) : "r0" ); }
# 930 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 930 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 953 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 953 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 953 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 953 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 953 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_flash_protect(uint32_t block_cfg0, uint32_t block_cfg1, uint32_t block_cfg2, uint32_t block_cfg3) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_FLASH_PROTECT) : "r0" ); }
# 953 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 953 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 975 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 975 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 975 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 975 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 975 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_radio_session_open(nrf_radio_signal_callback_t p_radio_signal_callback) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RADIO_SESSION_OPEN) : "r0" ); }
# 975 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 975 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 988 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 988 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 988 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 988 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 988 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_radio_session_close(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RADIO_SESSION_CLOSE) : "r0" ); }
# 988 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 988 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 1025 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 1025 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 1025 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 1025 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1025 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_radio_request(nrf_radio_request_t const * p_request) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RADIO_REQUEST) : "r0" ); }
# 1025 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 1025 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 1046 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 1046 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 1046 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"

# 1046 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1046 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_protected_register_write(volatile uint32_t * p_register, uint32_t value) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PROTECTED_REGISTER_WRITE) : "r0" ); }
# 1046 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 1046 "../../../../../../components/softdevice/s113/headers/nrf_soc.h"
 ;
# 57 "../../../../../../components/libraries/util/app_util_platform.h" 2
# 1 "../../../../../../components/softdevice/s113/headers/nrf_nvic.h" 1
# 119 "../../../../../../components/softdevice/s113/headers/nrf_nvic.h"
typedef struct
{
  uint32_t volatile __irq_masks[(2)];
  uint32_t volatile __cr_flag;
} nrf_nvic_state_t;



extern nrf_nvic_state_t nrf_nvic_state;
# 138 "../../../../../../components/softdevice/s113/headers/nrf_nvic.h"
static inline int __sd_nvic_irq_disable(void);



static inline void __sd_nvic_irq_enable(void);






static inline uint32_t __sd_nvic_app_accessible_irq(IRQn_Type IRQn);






static inline uint32_t __sd_nvic_is_app_accessible_priority(uint32_t priority);
# 174 "../../../../../../components/softdevice/s113/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_EnableIRQ(IRQn_Type IRQn);
# 186 "../../../../../../components/softdevice/s113/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_DisableIRQ(IRQn_Type IRQn);
# 199 "../../../../../../components/softdevice/s113/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_GetPendingIRQ(IRQn_Type IRQn, uint32_t * p_pending_irq);
# 211 "../../../../../../components/softdevice/s113/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_SetPendingIRQ(IRQn_Type IRQn);
# 223 "../../../../../../components/softdevice/s113/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_ClearPendingIRQ(IRQn_Type IRQn);
# 238 "../../../../../../components/softdevice/s113/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_SetPriority(IRQn_Type IRQn, uint32_t priority);
# 251 "../../../../../../components/softdevice/s113/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_GetPriority(IRQn_Type IRQn, uint32_t * p_priority);






static inline uint32_t sd_nvic_SystemReset(void);
# 271 "../../../../../../components/softdevice/s113/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_critical_region_enter(uint8_t * p_is_nested_critical_region);
# 282 "../../../../../../components/softdevice/s113/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_critical_region_exit(uint8_t is_nested_critical_region);





static inline int __sd_nvic_irq_disable(void)
{
  int pm = __get_PRIMASK();
  __disable_irq();
  return pm;
}

static inline void __sd_nvic_irq_enable(void)
{
  __enable_irq();
}

static inline uint32_t __sd_nvic_app_accessible_irq(IRQn_Type IRQn)
{
  if (IRQn < 32)
  {
    return ((1UL<<IRQn) & (~((uint32_t)( (1U << POWER_CLOCK_IRQn) | (1U << RADIO_IRQn) | (1U << RTC0_IRQn) | (1U << TIMER0_IRQn) | (1U << RNG_IRQn) | (1U << ECB_IRQn) | (1U << CCM_AAR_IRQn) | (1U << TEMP_IRQn) | (1U << (30)) | (1U << (uint32_t)SWI5_EGU5_IRQn) )))) != 0;
  }
  else if (IRQn < 64)
  {
    return ((1UL<<(IRQn-32)) & (~((uint32_t)0))) != 0;
  }
  else
  {
    return 1;
  }
}

static inline uint32_t __sd_nvic_is_app_accessible_priority(uint32_t priority)
{
  if( (priority >= (1 << 3))
   || (((1 << priority) & ((uint8_t)~((uint8_t)( (1U << 0) | (1U << 1) | (1U << 4) )))) == 0)
    )
  {
    return 0;
  }
  return 1;
}


static inline uint32_t sd_nvic_EnableIRQ(IRQn_Type IRQn)
{
  if (!__sd_nvic_app_accessible_irq(IRQn))
  {
    return ((0x2000) + 1);
  }
  if (!__sd_nvic_is_app_accessible_priority(__NVIC_GetPriority(IRQn)))
  {
    return ((0x2000) + 2);
  }

  if (nrf_nvic_state.__cr_flag)
  {
    nrf_nvic_state.__irq_masks[(uint32_t)((int32_t)IRQn) >> 5] |= (uint32_t)(1 << ((uint32_t)((int32_t)IRQn) & (uint32_t)0x1F));
  }
  else
  {
    __NVIC_EnableIRQ(IRQn);
  }
  return ((0x0) + 0);
}

static inline uint32_t sd_nvic_DisableIRQ(IRQn_Type IRQn)
{
  if (!__sd_nvic_app_accessible_irq(IRQn))
  {
    return ((0x2000) + 1);
  }

  if (nrf_nvic_state.__cr_flag)
  {
    nrf_nvic_state.__irq_masks[(uint32_t)((int32_t)IRQn) >> 5] &= ~(1UL << ((uint32_t)(IRQn) & 0x1F));
  }
  else
  {
    __NVIC_DisableIRQ(IRQn);
  }

  return ((0x0) + 0);
}

static inline uint32_t sd_nvic_GetPendingIRQ(IRQn_Type IRQn, uint32_t * p_pending_irq)
{
  if (__sd_nvic_app_accessible_irq(IRQn))
  {
    *p_pending_irq = __NVIC_GetPendingIRQ(IRQn);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x2000) + 1);
  }
}

static inline uint32_t sd_nvic_SetPendingIRQ(IRQn_Type IRQn)
{
  if (__sd_nvic_app_accessible_irq(IRQn))
  {
    __NVIC_SetPendingIRQ(IRQn);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x2000) + 1);
  }
}

static inline uint32_t sd_nvic_ClearPendingIRQ(IRQn_Type IRQn)
{
  if (__sd_nvic_app_accessible_irq(IRQn))
  {
    __NVIC_ClearPendingIRQ(IRQn);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x2000) + 1);
  }
}

static inline uint32_t sd_nvic_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if (!__sd_nvic_app_accessible_irq(IRQn))
  {
    return ((0x2000) + 1);
  }

  if (!__sd_nvic_is_app_accessible_priority(priority))
  {
    return ((0x2000) + 2);
  }

  __NVIC_SetPriority(IRQn, (uint32_t)priority);
  return ((0x0) + 0);
}

static inline uint32_t sd_nvic_GetPriority(IRQn_Type IRQn, uint32_t * p_priority)
{
  if (__sd_nvic_app_accessible_irq(IRQn))
  {
    *p_priority = (__NVIC_GetPriority(IRQn) & 0xFF);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x2000) + 1);
  }
}

static inline uint32_t sd_nvic_SystemReset(void)
{
  __NVIC_SystemReset();
  return ((0x2000) + 3);
}

static inline uint32_t sd_nvic_critical_region_enter(uint8_t * p_is_nested_critical_region)
{
  int was_masked = __sd_nvic_irq_disable();
  if (!nrf_nvic_state.__cr_flag)
  {
    nrf_nvic_state.__cr_flag = 1;
    nrf_nvic_state.__irq_masks[0] = ( ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[0] & (~((uint32_t)( (1U << POWER_CLOCK_IRQn) | (1U << RADIO_IRQn) | (1U << RTC0_IRQn) | (1U << TIMER0_IRQn) | (1U << RNG_IRQn) | (1U << ECB_IRQn) | (1U << CCM_AAR_IRQn) | (1U << TEMP_IRQn) | (1U << (30)) | (1U << (uint32_t)SWI5_EGU5_IRQn) ))) );
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[0] = (~((uint32_t)( (1U << POWER_CLOCK_IRQn) | (1U << RADIO_IRQn) | (1U << RTC0_IRQn) | (1U << TIMER0_IRQn) | (1U << RNG_IRQn) | (1U << ECB_IRQn) | (1U << CCM_AAR_IRQn) | (1U << TEMP_IRQn) | (1U << (30)) | (1U << (uint32_t)SWI5_EGU5_IRQn) )));
    nrf_nvic_state.__irq_masks[1] = ( ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[1] & (~((uint32_t)0)) );
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[1] = (~((uint32_t)0));
    *p_is_nested_critical_region = 0;
  }
  else
  {
    *p_is_nested_critical_region = 1;
  }
  if (!was_masked)
  {
    __sd_nvic_irq_enable();
  }
  return ((0x0) + 0);
}

static inline uint32_t sd_nvic_critical_region_exit(uint8_t is_nested_critical_region)
{
  if (nrf_nvic_state.__cr_flag && (is_nested_critical_region == 0))
  {
    int was_masked = __sd_nvic_irq_disable();
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[0] = nrf_nvic_state.__irq_masks[0];
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[1] = nrf_nvic_state.__irq_masks[1];
    nrf_nvic_state.__cr_flag = 0;
    if (!was_masked)
    {
      __sd_nvic_irq_enable();
    }
  }

  return ((0x0) + 0);
}
# 58 "../../../../../../components/libraries/util/app_util_platform.h" 2

# 1 "../../../../../../components/libraries/util/nrf_assert.h" 1
# 60 "../../../../../../components/libraries/util/app_util_platform.h" 2
# 1 "../../../../../../components/libraries/util/app_error.h" 1
# 54 "../../../../../../components/libraries/util/app_error.h"
# 1 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 1 3 4
# 72 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4

# 72 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
int putchar(int __c);
# 81 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
int getchar(void);
# 93 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
int puts(const char *__s);
# 110 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
char *gets(char *__s);
# 129 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
int sprintf(char *__s, const char *__format, ...);
# 157 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
int snprintf(char *__s, size_t __n, const char *__format, ...);
# 193 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
int vsnprintf(char *__s, size_t __n, const char *__format, __va_list __arg);
# 439 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
int printf(const char *__format, ...);
# 459 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
int vprintf(const char *__format, __va_list __arg);
# 488 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
int vsprintf(char *__s, const char *__format, __va_list __arg);
# 689 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
int scanf(const char *__format, ...);
# 709 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
int sscanf(const char *__s, const char *__format, ...);
# 735 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
int vscanf(const char *__format, __va_list __arg);
# 759 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
int vsscanf(const char *__s, const char *__format, __va_list __arg);





typedef struct __printf_tag *__printf_tag_ptr;

int __putchar(int, __printf_tag_ptr);
# 785 "/usr/share/segger_embedded_studio_for_arm_5.30/include/stdio.h" 3 4
typedef struct __RAL_FILE FILE;


typedef long fpos_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE *, fpos_t *);
char *fgets(char *, int, FILE *);
int fileno(FILE *);
FILE *fopen(const char *, const char *);
int fprintf(FILE *, const char *, ...);
int fputc(int, FILE *);
int fputs(const char *, FILE *);
size_t fread(void *, size_t, size_t, FILE *);
FILE *freopen(const char *, const char *, FILE *);
int fscanf(FILE *, const char *, ...);
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void *, size_t, size_t, FILE *);
int getc(FILE *);
void perror(const char *);
int putc(int, FILE *);
int remove(const char *);
int rename(const char *, const char *);
void rewind(FILE *);
void setbuf(FILE *, char *);
int setvbuf(FILE *, char *, int, size_t);
FILE *tmpfile(void);
char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE *, const char *, __va_list);
int vfscanf(FILE *, const char *, __va_list);
int asprintf(char **ret, const char *format, ...);
int vasprintf(char **ret, const char *format, __va_list);
int dprintf(int fd, const char *format, ...);
int vdprintf(int fd, const char *format, __va_list);
FILE *fdopen(int fd, const char *mode);
# 55 "../../../../../../components/libraries/util/app_error.h" 2


# 1 "../../../../../../components/libraries/util/sdk_errors.h" 1
# 73 "../../../../../../components/libraries/util/sdk_errors.h"
# 1 "../../../../../../components/softdevice/s113/headers/nrf_error.h" 1
# 74 "../../../../../../components/libraries/util/sdk_errors.h" 2
# 159 "../../../../../../components/libraries/util/sdk_errors.h"

# 159 "../../../../../../components/libraries/util/sdk_errors.h"
typedef uint32_t ret_code_t;
# 58 "../../../../../../components/libraries/util/app_error.h" 2

# 1 "../../../../../../components/libraries/util/app_error_weak.h" 1
# 77 "../../../../../../components/libraries/util/app_error_weak.h"
void app_error_fault_handler(uint32_t id, uint32_t pc, uint32_t info);
# 60 "../../../../../../components/libraries/util/app_error.h" 2
# 80 "../../../../../../components/libraries/util/app_error.h"
typedef struct
{
    uint32_t line_num;
    uint8_t const * p_file_name;
    uint32_t err_code;
} error_info_t;



typedef struct
{
    uint32_t line_num;
    uint8_t const * p_file_name;
} assert_info_t;
# 111 "../../../../../../components/libraries/util/app_error.h"
void app_error_handler(uint32_t error_code, uint32_t line_num, const uint8_t * p_file_name);





void app_error_handler_bare(ret_code_t error_code);
# 127 "../../../../../../components/libraries/util/app_error.h"
void app_error_save_and_stop(uint32_t id, uint32_t pc, uint32_t info);
# 137 "../../../../../../components/libraries/util/app_error.h"
void app_error_log_handle(uint32_t id, uint32_t pc, uint32_t info);
# 61 "../../../../../../components/libraries/util/app_util_platform.h" 2
# 92 "../../../../../../components/libraries/util/app_util_platform.h"
typedef enum
{



    APP_IRQ_PRIORITY_HIGHEST = 2,

    APP_IRQ_PRIORITY_HIGH = 2,



    APP_IRQ_PRIORITY_MID = 3,

    APP_IRQ_PRIORITY_LOW_MID = 5,
    APP_IRQ_PRIORITY_LOW = 6,
    APP_IRQ_PRIORITY_LOWEST = 7,
    APP_IRQ_PRIORITY_THREAD = 15
} app_irq_priority_t;




typedef enum
{
    APP_LEVEL_UNPRIVILEGED,
    APP_LEVEL_PRIVILEGED
} app_level_t;
# 174 "../../../../../../components/libraries/util/app_util_platform.h"
void app_util_critical_region_enter (uint8_t *p_nested);
void app_util_critical_region_exit (uint8_t nested);
# 260 "../../../../../../components/libraries/util/app_util_platform.h"
uint8_t current_int_priority_get(void);
# 269 "../../../../../../components/libraries/util/app_util_platform.h"
uint8_t privilege_level_get(void);
# 183 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 203 "../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../modules/nrfx/soc/nrfx_coredep.h" 1
# 92 "../../../../../../modules/nrfx/soc/nrfx_coredep.h"
static inline void nrfx_coredep_delay_us(uint32_t time_us);
# 136 "../../../../../../modules/nrfx/soc/nrfx_coredep.h"
static inline void nrfx_coredep_delay_us(uint32_t time_us)
{
    if (time_us == 0)
    {
        return;
    }
# 161 "../../../../../../modules/nrfx/soc/nrfx_coredep.h"
    __attribute__((aligned(16)))
    static const uint16_t delay_machine_code[] = {
        0x3800 + 3,
        0xd8fd,
        0x4770
    };

    typedef void (* delay_func_t)(uint32_t);
    const delay_func_t delay_cycles =

        (delay_func_t)((((uint32_t)delay_machine_code) | 1));
    uint32_t cycles = time_us * 64;
    delay_cycles(cycles);
}
# 204 "../../../../../../integration/nrfx/nrfx_glue.h" 2





# 1 "../../../../../../modules/nrfx/soc/nrfx_atomic.h" 1
# 44 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
# 1 "../../../../../../modules/nrfx/nrfx.h" 1
# 45 "../../../../../../modules/nrfx/soc/nrfx_atomic.h" 2
# 63 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
typedef volatile uint32_t nrfx_atomic_u32_t;


typedef volatile uint32_t nrfx_atomic_flag_t;
# 76 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_store(nrfx_atomic_u32_t * p_data, uint32_t value);
# 86 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_store(nrfx_atomic_u32_t * p_data, uint32_t value);
# 97 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_or(nrfx_atomic_u32_t * p_data, uint32_t value);
# 108 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_or(nrfx_atomic_u32_t * p_data, uint32_t value);
# 119 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_and(nrfx_atomic_u32_t * p_data, uint32_t value);
# 130 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_and(nrfx_atomic_u32_t * p_data, uint32_t value);
# 141 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_xor(nrfx_atomic_u32_t * p_data, uint32_t value);
# 152 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_xor(nrfx_atomic_u32_t * p_data, uint32_t value);
# 163 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_add(nrfx_atomic_u32_t * p_data, uint32_t value);
# 174 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_add(nrfx_atomic_u32_t * p_data, uint32_t value);
# 185 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_sub(nrfx_atomic_u32_t * p_data, uint32_t value);
# 196 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_sub(nrfx_atomic_u32_t * p_data, uint32_t value);
# 212 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"

# 212 "../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3 4
_Bool 
# 212 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
    nrfx_atomic_u32_cmp_exch(nrfx_atomic_u32_t * p_data,
                              uint32_t * p_expected,
                              uint32_t desired);
# 225 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_sub_hs(nrfx_atomic_u32_t * p_data, uint32_t value);
# 236 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_sub_hs(nrfx_atomic_u32_t * p_data, uint32_t value);
# 246 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_flag_set_fetch(nrfx_atomic_flag_t * p_data);
# 256 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_flag_set(nrfx_atomic_flag_t * p_data);
# 266 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_flag_clear_fetch(nrfx_atomic_flag_t * p_data);
# 276 "../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_flag_clear(nrfx_atomic_flag_t * p_data);
# 210 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 279 "../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../components/libraries/util/sdk_errors.h" 1
# 280 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 288 "../../../../../../integration/nrfx/nrfx_glue.h"
typedef ret_code_t nrfx_err_t;
# 311 "../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../components/libraries/util/sdk_resources.h" 1
# 52 "../../../../../../components/libraries/util/sdk_resources.h"
# 1 "../../../../../../components/softdevice/s113/headers/nrf_sd_def.h" 1
# 44 "../../../../../../components/softdevice/s113/headers/nrf_sd_def.h"
# 1 "../../../../../../components/softdevice/s113/headers/nrf_soc.h" 1
# 45 "../../../../../../components/softdevice/s113/headers/nrf_sd_def.h" 2
# 53 "../../../../../../components/libraries/util/sdk_resources.h" 2
# 312 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 47 "../../../../../../modules/nrfx/nrfx.h" 2
# 1 "../../../../../../modules/nrfx/drivers/nrfx_errors.h" 1
# 48 "../../../../../../modules/nrfx/nrfx.h" 2
# 45 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 2
# 1 "../../../../../../modules/nrfx/hal/nrf_timer.h" 1
# 129 "../../../../../../modules/nrfx/hal/nrf_timer.h"
typedef enum
{
    NRF_TIMER_TASK_START = __builtin_offsetof (NRF_TIMER_Type, TASKS_START),
    NRF_TIMER_TASK_STOP = __builtin_offsetof (NRF_TIMER_Type, TASKS_STOP),
    NRF_TIMER_TASK_COUNT = __builtin_offsetof (NRF_TIMER_Type, TASKS_COUNT),
    NRF_TIMER_TASK_CLEAR = __builtin_offsetof (NRF_TIMER_Type, TASKS_CLEAR),
    NRF_TIMER_TASK_SHUTDOWN = __builtin_offsetof (NRF_TIMER_Type, TASKS_SHUTDOWN),
    NRF_TIMER_TASK_CAPTURE0 = __builtin_offsetof (NRF_TIMER_Type, TASKS_CAPTURE[0]),
    NRF_TIMER_TASK_CAPTURE1 = __builtin_offsetof (NRF_TIMER_Type, TASKS_CAPTURE[1]),
    NRF_TIMER_TASK_CAPTURE2 = __builtin_offsetof (NRF_TIMER_Type, TASKS_CAPTURE[2]),
    NRF_TIMER_TASK_CAPTURE3 = __builtin_offsetof (NRF_TIMER_Type, TASKS_CAPTURE[3]),

    NRF_TIMER_TASK_CAPTURE4 = __builtin_offsetof (NRF_TIMER_Type, TASKS_CAPTURE[4]),


    NRF_TIMER_TASK_CAPTURE5 = __builtin_offsetof (NRF_TIMER_Type, TASKS_CAPTURE[5]),

} nrf_timer_task_t;


typedef enum
{
    NRF_TIMER_EVENT_COMPARE0 = __builtin_offsetof (NRF_TIMER_Type, EVENTS_COMPARE[0]),
    NRF_TIMER_EVENT_COMPARE1 = __builtin_offsetof (NRF_TIMER_Type, EVENTS_COMPARE[1]),
    NRF_TIMER_EVENT_COMPARE2 = __builtin_offsetof (NRF_TIMER_Type, EVENTS_COMPARE[2]),
    NRF_TIMER_EVENT_COMPARE3 = __builtin_offsetof (NRF_TIMER_Type, EVENTS_COMPARE[3]),

    NRF_TIMER_EVENT_COMPARE4 = __builtin_offsetof (NRF_TIMER_Type, EVENTS_COMPARE[4]),


    NRF_TIMER_EVENT_COMPARE5 = __builtin_offsetof (NRF_TIMER_Type, EVENTS_COMPARE[5]),

} nrf_timer_event_t;


typedef enum
{
    NRF_TIMER_SHORT_COMPARE0_STOP_MASK = (0x1UL << (8UL)),
    NRF_TIMER_SHORT_COMPARE1_STOP_MASK = (0x1UL << (9UL)),
    NRF_TIMER_SHORT_COMPARE2_STOP_MASK = (0x1UL << (10UL)),
    NRF_TIMER_SHORT_COMPARE3_STOP_MASK = (0x1UL << (11UL)),

    NRF_TIMER_SHORT_COMPARE4_STOP_MASK = (0x1UL << (12UL)),


    NRF_TIMER_SHORT_COMPARE5_STOP_MASK = (0x1UL << (13UL)),

    NRF_TIMER_SHORT_COMPARE0_CLEAR_MASK = (0x1UL << (0UL)),
    NRF_TIMER_SHORT_COMPARE1_CLEAR_MASK = (0x1UL << (1UL)),
    NRF_TIMER_SHORT_COMPARE2_CLEAR_MASK = (0x1UL << (2UL)),
    NRF_TIMER_SHORT_COMPARE3_CLEAR_MASK = (0x1UL << (3UL)),

    NRF_TIMER_SHORT_COMPARE4_CLEAR_MASK = (0x1UL << (4UL)),


    NRF_TIMER_SHORT_COMPARE5_CLEAR_MASK = (0x1UL << (5UL)),

} nrf_timer_short_mask_t;


typedef enum
{
    NRF_TIMER_MODE_TIMER = (0UL),
    NRF_TIMER_MODE_COUNTER = (1UL),

    NRF_TIMER_MODE_LOW_POWER_COUNTER = (2UL),

} nrf_timer_mode_t;


typedef enum
{
    NRF_TIMER_BIT_WIDTH_8 = (1UL),
    NRF_TIMER_BIT_WIDTH_16 = (0UL),
    NRF_TIMER_BIT_WIDTH_24 = (2UL),
    NRF_TIMER_BIT_WIDTH_32 = (3UL)
} nrf_timer_bit_width_t;


typedef enum
{
    NRF_TIMER_FREQ_16MHz = 0,
    NRF_TIMER_FREQ_8MHz,
    NRF_TIMER_FREQ_4MHz,
    NRF_TIMER_FREQ_2MHz,
    NRF_TIMER_FREQ_1MHz,
    NRF_TIMER_FREQ_500kHz,
    NRF_TIMER_FREQ_250kHz,
    NRF_TIMER_FREQ_125kHz,
    NRF_TIMER_FREQ_62500Hz,
    NRF_TIMER_FREQ_31250Hz
} nrf_timer_frequency_t;


typedef enum
{
    NRF_TIMER_CC_CHANNEL0 = 0,
    NRF_TIMER_CC_CHANNEL1,
    NRF_TIMER_CC_CHANNEL2,
    NRF_TIMER_CC_CHANNEL3,

    NRF_TIMER_CC_CHANNEL4,


    NRF_TIMER_CC_CHANNEL5,

} nrf_timer_cc_channel_t;


typedef enum
{
    NRF_TIMER_INT_COMPARE0_MASK = (0x1UL << (16UL)),
    NRF_TIMER_INT_COMPARE1_MASK = (0x1UL << (17UL)),
    NRF_TIMER_INT_COMPARE2_MASK = (0x1UL << (18UL)),
    NRF_TIMER_INT_COMPARE3_MASK = (0x1UL << (19UL)),

    NRF_TIMER_INT_COMPARE4_MASK = (0x1UL << (20UL)),


    NRF_TIMER_INT_COMPARE5_MASK = (0x1UL << (21UL)),

} nrf_timer_int_mask_t;
# 259 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline void nrf_timer_task_trigger(NRF_TIMER_Type * p_reg,
                                            nrf_timer_task_t task);
# 270 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline uint32_t * nrf_timer_task_address_get(NRF_TIMER_Type * p_reg,
                                                      nrf_timer_task_t task);







static inline void nrf_timer_event_clear(NRF_TIMER_Type * p_reg,
                                           nrf_timer_event_t event);
# 291 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline 
# 291 "../../../../../../modules/nrfx/hal/nrf_timer.h" 3 4
               _Bool 
# 291 "../../../../../../modules/nrfx/hal/nrf_timer.h"
                    nrf_timer_event_check(NRF_TIMER_Type * p_reg,
                                           nrf_timer_event_t event);
# 302 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline uint32_t * nrf_timer_event_address_get(NRF_TIMER_Type * p_reg,
                                                       nrf_timer_event_t event);







static inline void nrf_timer_shorts_enable(NRF_TIMER_Type * p_reg,
                                             uint32_t mask);







static inline void nrf_timer_shorts_disable(NRF_TIMER_Type * p_reg,
                                              uint32_t mask);







static inline void nrf_timer_int_enable(NRF_TIMER_Type * p_reg,
                                          uint32_t mask);







static inline void nrf_timer_int_disable(NRF_TIMER_Type * p_reg,
                                           uint32_t mask);
# 350 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline 
# 350 "../../../../../../modules/nrfx/hal/nrf_timer.h" 3 4
               _Bool 
# 350 "../../../../../../modules/nrfx/hal/nrf_timer.h"
                    nrf_timer_int_enable_check(NRF_TIMER_Type * p_reg,
                                                uint32_t timer_int);
# 405 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline void nrf_timer_mode_set(NRF_TIMER_Type * p_reg,
                                        nrf_timer_mode_t mode);
# 415 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline nrf_timer_mode_t nrf_timer_mode_get(NRF_TIMER_Type * p_reg);







static inline void nrf_timer_bit_width_set(NRF_TIMER_Type * p_reg,
                                             nrf_timer_bit_width_t bit_width);
# 433 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline nrf_timer_bit_width_t nrf_timer_bit_width_get(NRF_TIMER_Type * p_reg);







static inline void nrf_timer_frequency_set(NRF_TIMER_Type * p_reg,
                                             nrf_timer_frequency_t frequency);
# 451 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline nrf_timer_frequency_t nrf_timer_frequency_get(NRF_TIMER_Type * p_reg);
# 460 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline void nrf_timer_cc_write(NRF_TIMER_Type * p_reg,
                                        nrf_timer_cc_channel_t cc_channel,
                                        uint32_t cc_value);
# 472 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline uint32_t nrf_timer_cc_read(NRF_TIMER_Type * p_reg,
                                           nrf_timer_cc_channel_t cc_channel);
# 482 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline nrf_timer_task_t nrf_timer_capture_task_get(uint32_t channel);
# 491 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline nrf_timer_event_t nrf_timer_compare_event_get(uint32_t channel);
# 500 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline nrf_timer_int_mask_t nrf_timer_compare_int_get(uint32_t channel);
# 511 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline uint32_t nrf_timer_us_to_ticks(uint32_t time_us,
                                               nrf_timer_frequency_t frequency);
# 523 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline uint32_t nrf_timer_ms_to_ticks(uint32_t time_ms,
                                               nrf_timer_frequency_t frequency);




static inline void nrf_timer_task_trigger(NRF_TIMER_Type * p_reg,
                                            nrf_timer_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

static inline uint32_t * nrf_timer_task_address_get(NRF_TIMER_Type * p_reg,
                                                      nrf_timer_task_t task)
{
    return (uint32_t *)((uint8_t *)p_reg + (uint32_t)task);
}

static inline void nrf_timer_event_clear(NRF_TIMER_Type * p_reg,
                                           nrf_timer_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;

    volatile uint32_t dummy = *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event));
    (void)dummy;

}

static inline 
# 551 "../../../../../../modules/nrfx/hal/nrf_timer.h" 3 4
               _Bool 
# 551 "../../../../../../modules/nrfx/hal/nrf_timer.h"
                    nrf_timer_event_check(NRF_TIMER_Type * p_reg,
                                           nrf_timer_event_t event)
{
    return (
# 554 "../../../../../../modules/nrfx/hal/nrf_timer.h" 3 4
           _Bool
# 554 "../../../../../../modules/nrfx/hal/nrf_timer.h"
               )*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

static inline uint32_t * nrf_timer_event_address_get(NRF_TIMER_Type * p_reg,
                                                       nrf_timer_event_t event)
{
    return (uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

static inline void nrf_timer_shorts_enable(NRF_TIMER_Type * p_reg,
                                             uint32_t mask)
{
    p_reg->SHORTS |= mask;
}

static inline void nrf_timer_shorts_disable(NRF_TIMER_Type * p_reg,
                                              uint32_t mask)
{
    p_reg->SHORTS &= ~(mask);
}

static inline void nrf_timer_int_enable(NRF_TIMER_Type * p_reg,
                                          uint32_t mask)
{
    p_reg->INTENSET = mask;
}

static inline void nrf_timer_int_disable(NRF_TIMER_Type * p_reg,
                                           uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

static inline 
# 587 "../../../../../../modules/nrfx/hal/nrf_timer.h" 3 4
               _Bool 
# 587 "../../../../../../modules/nrfx/hal/nrf_timer.h"
                    nrf_timer_int_enable_check(NRF_TIMER_Type * p_reg,
                                                uint32_t timer_int)
{
    return (
# 590 "../../../../../../modules/nrfx/hal/nrf_timer.h" 3 4
           _Bool
# 590 "../../../../../../modules/nrfx/hal/nrf_timer.h"
               )(p_reg->INTENSET & timer_int);
}
# 623 "../../../../../../modules/nrfx/hal/nrf_timer.h"
static inline void nrf_timer_mode_set(NRF_TIMER_Type * p_reg,
                                        nrf_timer_mode_t mode)
{
    p_reg->MODE = (p_reg->MODE & ~(0x3UL << (0UL))) |
                    ((mode << (0UL)) & (0x3UL << (0UL)));
}

static inline nrf_timer_mode_t nrf_timer_mode_get(NRF_TIMER_Type * p_reg)
{
    return (nrf_timer_mode_t)(p_reg->MODE);
}

static inline void nrf_timer_bit_width_set(NRF_TIMER_Type * p_reg,
                                             nrf_timer_bit_width_t bit_width)
{
    p_reg->BITMODE = (p_reg->BITMODE & ~(0x3UL << (0UL))) |
                       ((bit_width << (0UL)) &
                            (0x3UL << (0UL)));
}

static inline nrf_timer_bit_width_t nrf_timer_bit_width_get(NRF_TIMER_Type * p_reg)
{
    return (nrf_timer_bit_width_t)(p_reg->BITMODE);
}

static inline void nrf_timer_frequency_set(NRF_TIMER_Type * p_reg,
                                             nrf_timer_frequency_t frequency)
{
    p_reg->PRESCALER = (p_reg->PRESCALER & ~(0xFUL << (0UL))) |
                         ((frequency << (0UL)) &
                              (0xFUL << (0UL)));
}

static inline nrf_timer_frequency_t nrf_timer_frequency_get(NRF_TIMER_Type * p_reg)
{
    return (nrf_timer_frequency_t)(p_reg->PRESCALER);
}

static inline void nrf_timer_cc_write(NRF_TIMER_Type * p_reg,
                                        nrf_timer_cc_channel_t cc_channel,
                                        uint32_t cc_value)
{
    p_reg->CC[cc_channel] = cc_value;
}

static inline uint32_t nrf_timer_cc_read(NRF_TIMER_Type * p_reg,
                                           nrf_timer_cc_channel_t cc_channel)
{
    return (uint32_t)p_reg->CC[cc_channel];
}

static inline nrf_timer_task_t nrf_timer_capture_task_get(uint32_t channel)
{
    return (nrf_timer_task_t)((size_t)&(((NRF_TIMER_Type *)0)->TASKS_CAPTURE[channel]));
}

static inline nrf_timer_event_t nrf_timer_compare_event_get(uint32_t channel)
{
    return (nrf_timer_event_t)((size_t)&(((NRF_TIMER_Type *)0)->EVENTS_COMPARE[channel]));
}

static inline nrf_timer_int_mask_t nrf_timer_compare_int_get(uint32_t channel)
{
    return (nrf_timer_int_mask_t)
        ((uint32_t)NRF_TIMER_INT_COMPARE0_MASK << channel);
}

static inline uint32_t nrf_timer_us_to_ticks(uint32_t time_us,
                                               nrf_timer_frequency_t frequency)
{


    uint32_t prescaler = (uint32_t)frequency;
    uint64_t ticks = ((time_us * 16ULL) >> prescaler);
    if (0) { if (ticks <= 
# 697 "../../../../../../modules/nrfx/hal/nrf_timer.h" 3 4
   4294967295UL
# 697 "../../../../../../modules/nrfx/hal/nrf_timer.h"
   ) { } else { assert_nrf_callback((uint16_t)697, (uint8_t *)"../../../../../../modules/nrfx/hal/nrf_timer.h"); } };
    return (uint32_t)ticks;
}

static inline uint32_t nrf_timer_ms_to_ticks(uint32_t time_ms,
                                               nrf_timer_frequency_t frequency)
{


    uint32_t prescaler = (uint32_t)frequency;
    uint64_t ticks = ((time_ms * 16000ULL) >> prescaler);
    if (0) { if (ticks <= 
# 708 "../../../../../../modules/nrfx/hal/nrf_timer.h" 3 4
   4294967295UL
# 708 "../../../../../../modules/nrfx/hal/nrf_timer.h"
   ) { } else { assert_nrf_callback((uint16_t)708, (uint8_t *)"../../../../../../modules/nrfx/hal/nrf_timer.h"); } };
    return (uint32_t)ticks;
}
# 46 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 2
# 61 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
typedef struct
{
    NRF_TIMER_Type * p_reg;
    uint8_t instance_id;
    uint8_t cc_channel_count;
} nrfx_timer_t;
# 77 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
enum {
# 93 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
    NRFX_TIMER_ENABLED_COUNT
};



typedef struct
{
    nrf_timer_frequency_t frequency;
    nrf_timer_mode_t mode;
    nrf_timer_bit_width_t bit_width;
    uint8_t interrupt_priority;
    void * p_context;
} nrfx_timer_config_t;
# 126 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
typedef void (* nrfx_timer_event_handler_t)(nrf_timer_event_t event_type,
                                            void * p_context);
# 140 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
nrfx_err_t nrfx_timer_init(nrfx_timer_t const * const p_instance,
                           nrfx_timer_config_t const * p_config,
                           nrfx_timer_event_handler_t timer_event_handler);






void nrfx_timer_uninit(nrfx_timer_t const * const p_instance);






void nrfx_timer_enable(nrfx_timer_t const * const p_instance);
# 166 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
void nrfx_timer_disable(nrfx_timer_t const * const p_instance);
# 176 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"

# 176 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3 4
_Bool 
# 176 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
    nrfx_timer_is_enabled(nrfx_timer_t const * const p_instance);






void nrfx_timer_pause(nrfx_timer_t const * const p_instance);






void nrfx_timer_resume(nrfx_timer_t const * const p_instance);






void nrfx_timer_clear(nrfx_timer_t const * const p_instance);






void nrfx_timer_increment(nrfx_timer_t const * const p_instance);
# 214 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
static inline uint32_t nrfx_timer_task_address_get(nrfx_timer_t const * const p_instance,
                                                     nrf_timer_task_t timer_task);
# 225 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
static inline uint32_t nrfx_timer_capture_task_address_get(nrfx_timer_t const * const p_instance,
                                                             uint32_t channel);
# 236 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
static inline uint32_t nrfx_timer_event_address_get(nrfx_timer_t const * const p_instance,
                                                      nrf_timer_event_t timer_event);
# 247 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
static inline uint32_t nrfx_timer_compare_event_address_get(nrfx_timer_t const * const p_instance,
                                                              uint32_t channel);
# 258 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
uint32_t nrfx_timer_capture(nrfx_timer_t const * const p_instance,
                            nrf_timer_cc_channel_t cc_channel);
# 271 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
static inline uint32_t nrfx_timer_capture_get(nrfx_timer_t const * const p_instance,
                                                nrf_timer_cc_channel_t cc_channel);
# 282 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
void nrfx_timer_compare(nrfx_timer_t const * const p_instance,
                        nrf_timer_cc_channel_t cc_channel,
                        uint32_t cc_value,
                        
# 285 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3 4
                       _Bool 
# 285 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
                                                  enable_int);
# 297 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
void nrfx_timer_extended_compare(nrfx_timer_t const * const p_instance,
                                 nrf_timer_cc_channel_t cc_channel,
                                 uint32_t cc_value,
                                 nrf_timer_short_mask_t timer_short_mask,
                                 
# 301 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3 4
                                _Bool 
# 301 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
                                                           enable_int);
# 311 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
static inline uint32_t nrfx_timer_us_to_ticks(nrfx_timer_t const * const p_instance,
                                                uint32_t time_us);
# 322 "../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"
static inline uint32_t nrfx_timer_ms_to_ticks(nrfx_timer_t const * const p_instance,
                                                uint32_t time_ms);







void nrfx_timer_compare_int_enable(nrfx_timer_t const * const p_instance,
                                   uint32_t channel);







void nrfx_timer_compare_int_disable(nrfx_timer_t const * const p_instance,
                                    uint32_t channel);




static inline uint32_t nrfx_timer_task_address_get(nrfx_timer_t const * const p_instance,
                                                     nrf_timer_task_t timer_task)
{
    return (uint32_t)nrf_timer_task_address_get(p_instance->p_reg, timer_task);
}

static inline uint32_t nrfx_timer_capture_task_address_get(nrfx_timer_t const * const p_instance,
                                                             uint32_t channel)
{
    if (0) { if (channel < p_instance->cc_channel_count) { } else { assert_nrf_callback((uint16_t)355, (uint8_t *)"../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"); } };
    return (uint32_t)nrf_timer_task_address_get(p_instance->p_reg,
                         nrf_timer_capture_task_get(channel));
}

static inline uint32_t nrfx_timer_event_address_get(nrfx_timer_t const * const p_instance,
                                                      nrf_timer_event_t timer_event)
{
    return (uint32_t)nrf_timer_event_address_get(p_instance->p_reg, timer_event);
}

static inline uint32_t nrfx_timer_compare_event_address_get(nrfx_timer_t const * const p_instance,
                                                              uint32_t channel)
{
    if (0) { if (channel < p_instance->cc_channel_count) { } else { assert_nrf_callback((uint16_t)369, (uint8_t *)"../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"); } };
    return (uint32_t)nrf_timer_event_address_get(p_instance->p_reg,
                         nrf_timer_compare_event_get(channel));
}

static inline uint32_t nrfx_timer_capture_get(nrfx_timer_t const * const p_instance,
                                                nrf_timer_cc_channel_t cc_channel)
{
    return nrf_timer_cc_read(p_instance->p_reg, cc_channel);
}

static inline uint32_t nrfx_timer_us_to_ticks(nrfx_timer_t const * const p_instance,
                                                uint32_t timer_us)
{
    return nrf_timer_us_to_ticks(timer_us, nrf_timer_frequency_get(p_instance->p_reg));
}

static inline uint32_t nrfx_timer_ms_to_ticks(nrfx_timer_t const * const p_instance,
                                                uint32_t timer_ms)
{
    return nrf_timer_ms_to_ticks(timer_ms, nrf_timer_frequency_get(p_instance->p_reg));
}






void TIMER0_IRQHandler(void);
void TIMER1_IRQHandler(void);
void TIMER2_IRQHandler(void);
void TIMER3_IRQHandler(void);
void TIMER4_IRQHandler(void);
# 45 "../../../../../../integration/nrfx/legacy/nrf_drv_timer.h" 2
# 59 "../../../../../../integration/nrfx/legacy/nrf_drv_timer.h"
typedef nrfx_timer_t nrf_drv_timer_t;

typedef nrfx_timer_config_t nrf_drv_timer_config_t;
# 13 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2

# 1 "../../../../../../modules/nrfx/hal/nrf_gpio.h" 1
# 85 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
typedef enum
{
    NRF_GPIO_PIN_DIR_INPUT = (0UL),
    NRF_GPIO_PIN_DIR_OUTPUT = (1UL)
} nrf_gpio_pin_dir_t;


typedef enum
{
    NRF_GPIO_PIN_INPUT_CONNECT = (0UL),
    NRF_GPIO_PIN_INPUT_DISCONNECT = (1UL)
} nrf_gpio_pin_input_t;





typedef enum
{
    NRF_GPIO_PIN_NOPULL = (0UL),
    NRF_GPIO_PIN_PULLDOWN = (1UL),
    NRF_GPIO_PIN_PULLUP = (3UL),
} nrf_gpio_pin_pull_t;


typedef enum
{
    NRF_GPIO_PIN_S0S1 = (0UL),
    NRF_GPIO_PIN_H0S1 = (1UL),
    NRF_GPIO_PIN_S0H1 = (2UL),
    NRF_GPIO_PIN_H0H1 = (3UL),
    NRF_GPIO_PIN_D0S1 = (4UL),
    NRF_GPIO_PIN_D0H1 = (5UL),
    NRF_GPIO_PIN_S0D1 = (6UL),
    NRF_GPIO_PIN_H0D1 = (7UL),
} nrf_gpio_pin_drive_t;


typedef enum
{
    NRF_GPIO_PIN_NOSENSE = (0UL),
    NRF_GPIO_PIN_SENSE_LOW = (3UL),
    NRF_GPIO_PIN_SENSE_HIGH = (2UL),
} nrf_gpio_pin_sense_t;
# 141 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_range_cfg_output(uint32_t pin_range_start, uint32_t pin_range_end);
# 154 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_range_cfg_input(uint32_t pin_range_start,
                                              uint32_t pin_range_end,
                                              nrf_gpio_pin_pull_t pull_config);
# 171 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg(
    uint32_t pin_number,
    nrf_gpio_pin_dir_t dir,
    nrf_gpio_pin_input_t input,
    nrf_gpio_pin_pull_t pull,
    nrf_gpio_pin_drive_t drive,
    nrf_gpio_pin_sense_t sense);
# 187 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg_output(uint32_t pin_number);
# 198 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg_input(uint32_t pin_number, nrf_gpio_pin_pull_t pull_config);






static inline void nrf_gpio_cfg_default(uint32_t pin_number);







static inline void nrf_gpio_cfg_watcher(uint32_t pin_number);






static inline void nrf_gpio_input_disconnect(uint32_t pin_number);
# 231 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg_sense_input(uint32_t pin_number,
                                              nrf_gpio_pin_pull_t pull_config,
                                              nrf_gpio_pin_sense_t sense_config);







static inline void nrf_gpio_cfg_sense_set(uint32_t pin_number, nrf_gpio_pin_sense_t sense_config);







static inline void nrf_gpio_pin_dir_set(uint32_t pin_number, nrf_gpio_pin_dir_t direction);
# 258 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_set(uint32_t pin_number);
# 267 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_clear(uint32_t pin_number);
# 276 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_toggle(uint32_t pin_number);
# 288 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_write(uint32_t pin_number, uint32_t value);
# 299 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_pin_read(uint32_t pin_number);
# 308 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_pin_out_read(uint32_t pin_number);
# 317 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline nrf_gpio_pin_sense_t nrf_gpio_pin_sense_get(uint32_t pin_number);
# 326 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline nrf_gpio_pin_dir_t nrf_gpio_pin_dir_get(uint32_t pin_number);
# 335 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline nrf_gpio_pin_input_t nrf_gpio_pin_input_get(uint32_t pin_number);
# 344 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline nrf_gpio_pin_pull_t nrf_gpio_pin_pull_get(uint32_t pin_number);







static inline void nrf_gpio_port_dir_output_set(NRF_GPIO_Type * p_reg, uint32_t out_mask);







static inline void nrf_gpio_port_dir_input_set(NRF_GPIO_Type * p_reg, uint32_t in_mask);







static inline void nrf_gpio_port_dir_write(NRF_GPIO_Type * p_reg, uint32_t dir_mask);
# 377 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_port_dir_read(NRF_GPIO_Type const * p_reg);
# 386 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_port_in_read(NRF_GPIO_Type const * p_reg);
# 395 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_port_out_read(NRF_GPIO_Type const * p_reg);







static inline void nrf_gpio_port_out_write(NRF_GPIO_Type * p_reg, uint32_t value);







static inline void nrf_gpio_port_out_set(NRF_GPIO_Type * p_reg, uint32_t set_mask);







static inline void nrf_gpio_port_out_clear(NRF_GPIO_Type * p_reg, uint32_t clr_mask);
# 428 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_ports_read(uint32_t start_port, uint32_t length, uint32_t * p_masks);
# 438 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_latches_read(uint32_t start_port,
                                           uint32_t length,
                                           uint32_t * p_masks);
# 449 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_latches_read_and_clear(uint32_t start_port,
                                                     uint32_t length,
                                                     uint32_t * p_masks);
# 460 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_pin_latch_get(uint32_t pin_number);






static inline void nrf_gpio_pin_latch_clear(uint32_t pin_number);
# 478 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline 
# 478 "../../../../../../modules/nrfx/hal/nrf_gpio.h" 3 4
               _Bool 
# 478 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
                    nrf_gpio_pin_present_check(uint32_t pin_number);
# 490 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline NRF_GPIO_Type * nrf_gpio_pin_port_decode(uint32_t * p_pin)
{
    if (0) { if (nrf_gpio_pin_present_check(*p_pin)) { } else { assert_nrf_callback((uint16_t)492, (uint8_t *)"../../../../../../modules/nrfx/hal/nrf_gpio.h"); } };



    if (*p_pin < 32)
    {
        return ((NRF_GPIO_Type*) 0x50000000UL);
    }
    else
    {
        *p_pin = *p_pin & 0x1F;
        return ((NRF_GPIO_Type*) 0x50000300UL);
    }

}


static inline void nrf_gpio_range_cfg_output(uint32_t pin_range_start, uint32_t pin_range_end)
{

    for (; pin_range_start <= pin_range_end; pin_range_start++)
    {
        nrf_gpio_cfg_output(pin_range_start);
    }
}


static inline void nrf_gpio_range_cfg_input(uint32_t pin_range_start,
                                              uint32_t pin_range_end,
                                              nrf_gpio_pin_pull_t pull_config)
{

    for (; pin_range_start <= pin_range_end; pin_range_start++)
    {
        nrf_gpio_cfg_input(pin_range_start, pull_config);
    }
}


static inline void nrf_gpio_cfg(
    uint32_t pin_number,
    nrf_gpio_pin_dir_t dir,
    nrf_gpio_pin_input_t input,
    nrf_gpio_pin_pull_t pull,
    nrf_gpio_pin_drive_t drive,
    nrf_gpio_pin_sense_t sense)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    reg->PIN_CNF[pin_number] = ((uint32_t)dir << (0UL))
                               | ((uint32_t)input << (1UL))
                               | ((uint32_t)pull << (2UL))
                               | ((uint32_t)drive << (8UL))
                               | ((uint32_t)sense << (16UL));
}


static inline void nrf_gpio_cfg_output(uint32_t pin_number)
{
    nrf_gpio_cfg(
        pin_number,
        NRF_GPIO_PIN_DIR_OUTPUT,
        NRF_GPIO_PIN_INPUT_DISCONNECT,
        NRF_GPIO_PIN_NOPULL,
        NRF_GPIO_PIN_S0S1,
        NRF_GPIO_PIN_NOSENSE);
}


static inline void nrf_gpio_cfg_input(uint32_t pin_number, nrf_gpio_pin_pull_t pull_config)
{
    nrf_gpio_cfg(
        pin_number,
        NRF_GPIO_PIN_DIR_INPUT,
        NRF_GPIO_PIN_INPUT_CONNECT,
        pull_config,
        NRF_GPIO_PIN_S0S1,
        NRF_GPIO_PIN_NOSENSE);
}


static inline void nrf_gpio_cfg_default(uint32_t pin_number)
{
    nrf_gpio_cfg(
        pin_number,
        NRF_GPIO_PIN_DIR_INPUT,
        NRF_GPIO_PIN_INPUT_DISCONNECT,
        NRF_GPIO_PIN_NOPULL,
        NRF_GPIO_PIN_S0S1,
        NRF_GPIO_PIN_NOSENSE);
}


static inline void nrf_gpio_cfg_watcher(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    uint32_t cnf = reg->PIN_CNF[pin_number] & ~(0x1UL << (1UL));

    reg->PIN_CNF[pin_number] = cnf | ((0UL) << (1UL));
}


static inline void nrf_gpio_input_disconnect(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    uint32_t cnf = reg->PIN_CNF[pin_number] & ~(0x1UL << (1UL));

    reg->PIN_CNF[pin_number] = cnf | ((1UL) << (1UL));
}


static inline void nrf_gpio_cfg_sense_input(uint32_t pin_number,
                                              nrf_gpio_pin_pull_t pull_config,
                                              nrf_gpio_pin_sense_t sense_config)
{
    nrf_gpio_cfg(
        pin_number,
        NRF_GPIO_PIN_DIR_INPUT,
        NRF_GPIO_PIN_INPUT_CONNECT,
        pull_config,
        NRF_GPIO_PIN_S0S1,
        sense_config);
}


static inline void nrf_gpio_cfg_sense_set(uint32_t pin_number, nrf_gpio_pin_sense_t sense_config)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);


    reg->PIN_CNF[pin_number] &= ~(0x3UL << (16UL));
    reg->PIN_CNF[pin_number] |= (sense_config << (16UL));
}


static inline void nrf_gpio_pin_dir_set(uint32_t pin_number, nrf_gpio_pin_dir_t direction)
{
    if (direction == NRF_GPIO_PIN_DIR_INPUT)
    {
        nrf_gpio_cfg(
            pin_number,
            NRF_GPIO_PIN_DIR_INPUT,
            NRF_GPIO_PIN_INPUT_CONNECT,
            NRF_GPIO_PIN_NOPULL,
            NRF_GPIO_PIN_S0S1,
            NRF_GPIO_PIN_NOSENSE);
    }
    else
    {
        NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);
        reg->DIRSET = (1UL << pin_number);
    }
}


static inline void nrf_gpio_pin_set(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    nrf_gpio_port_out_set(reg, 1UL << pin_number);
}


static inline void nrf_gpio_pin_clear(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    nrf_gpio_port_out_clear(reg, 1UL << pin_number);
}


static inline void nrf_gpio_pin_toggle(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);
    uint32_t pins_state = reg->OUT;

    reg->OUTSET = (~pins_state & (1UL << pin_number));
    reg->OUTCLR = (pins_state & (1UL << pin_number));
}


static inline void nrf_gpio_pin_write(uint32_t pin_number, uint32_t value)
{
    if (value == 0)
    {
        nrf_gpio_pin_clear(pin_number);
    }
    else
    {
        nrf_gpio_pin_set(pin_number);
    }
}


static inline uint32_t nrf_gpio_pin_read(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return ((nrf_gpio_port_in_read(reg) >> pin_number) & 1UL);
}


static inline uint32_t nrf_gpio_pin_out_read(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return ((nrf_gpio_port_out_read(reg) >> pin_number) & 1UL);
}


static inline nrf_gpio_pin_sense_t nrf_gpio_pin_sense_get(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return (nrf_gpio_pin_sense_t)((reg->PIN_CNF[pin_number] &
                                   (0x3UL << (16UL))) >> (16UL));
}


static inline nrf_gpio_pin_dir_t nrf_gpio_pin_dir_get(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return (nrf_gpio_pin_dir_t)((reg->PIN_CNF[pin_number] &
                                 (0x1UL << (0UL))) >> (0UL));
}

static inline nrf_gpio_pin_input_t nrf_gpio_pin_input_get(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return (nrf_gpio_pin_input_t)((reg->PIN_CNF[pin_number] &
                                   (0x1UL << (1UL))) >> (1UL));
}

static inline nrf_gpio_pin_pull_t nrf_gpio_pin_pull_get(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return (nrf_gpio_pin_pull_t)((reg->PIN_CNF[pin_number] &
                                  (0x3UL << (2UL))) >> (2UL));
}


static inline void nrf_gpio_port_dir_output_set(NRF_GPIO_Type * p_reg, uint32_t out_mask)
{
    p_reg->DIRSET = out_mask;
}


static inline void nrf_gpio_port_dir_input_set(NRF_GPIO_Type * p_reg, uint32_t in_mask)
{
    p_reg->DIRCLR = in_mask;
}


static inline void nrf_gpio_port_dir_write(NRF_GPIO_Type * p_reg, uint32_t value)
{
    p_reg->DIR = value;
}


static inline uint32_t nrf_gpio_port_dir_read(NRF_GPIO_Type const * p_reg)
{
    return p_reg->DIR;
}


static inline uint32_t nrf_gpio_port_in_read(NRF_GPIO_Type const * p_reg)
{
    return p_reg->IN;
}


static inline uint32_t nrf_gpio_port_out_read(NRF_GPIO_Type const * p_reg)
{
    return p_reg->OUT;
}


static inline void nrf_gpio_port_out_write(NRF_GPIO_Type * p_reg, uint32_t value)
{
    p_reg->OUT = value;
}


static inline void nrf_gpio_port_out_set(NRF_GPIO_Type * p_reg, uint32_t set_mask)
{
    p_reg->OUTSET = set_mask;
}


static inline void nrf_gpio_port_out_clear(NRF_GPIO_Type * p_reg, uint32_t clr_mask)
{
    p_reg->OUTCLR = clr_mask;
}


static inline void nrf_gpio_ports_read(uint32_t start_port, uint32_t length, uint32_t * p_masks)
{
    NRF_GPIO_Type * gpio_regs[2] = {((NRF_GPIO_Type*) 0x50000000UL), ((NRF_GPIO_Type*) 0x50000300UL)};

    if (0) { if (start_port + length <= 2) { } else { assert_nrf_callback((uint16_t)796, (uint8_t *)"../../../../../../modules/nrfx/hal/nrf_gpio.h"); } };
    uint32_t i;

    for (i = start_port; i < (start_port + length); i++)
    {
        *p_masks = nrf_gpio_port_in_read(gpio_regs[i]);
        p_masks++;
    }
}



static inline void nrf_gpio_latches_read(uint32_t start_port,
                                           uint32_t length,
                                           uint32_t * p_masks)
{
    NRF_GPIO_Type * gpio_regs[2] = {((NRF_GPIO_Type*) 0x50000000UL), ((NRF_GPIO_Type*) 0x50000300UL)};
    uint32_t i;

    for (i = start_port; i < (start_port + length); i++)
    {
        *p_masks = gpio_regs[i]->LATCH;
        p_masks++;
    }
}

static inline void nrf_gpio_latches_read_and_clear(uint32_t start_port,
                                                     uint32_t length,
                                                     uint32_t * p_masks)
{
    NRF_GPIO_Type * gpio_regs[2] = {((NRF_GPIO_Type*) 0x50000000UL), ((NRF_GPIO_Type*) 0x50000300UL)};
    uint32_t i;

    for (i = start_port; i < (start_port + length); i++)
    {
        *p_masks = gpio_regs[i]->LATCH;


        gpio_regs[i]->LATCH = *p_masks;

        p_masks++;
    }
}

static inline uint32_t nrf_gpio_pin_latch_get(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return (reg->LATCH & (1 << pin_number)) ? 1 : 0;
}


static inline void nrf_gpio_pin_latch_clear(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    reg->LATCH = (1 << pin_number);
}


static inline 
# 856 "../../../../../../modules/nrfx/hal/nrf_gpio.h" 3 4
               _Bool 
# 856 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
                    nrf_gpio_pin_present_check(uint32_t pin_number)
{
    uint32_t port = pin_number >> 5;
    uint32_t mask = 0;

    switch (port)
    {

        case 0:
            mask = 0xFFFFFFFFUL;
# 877 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
            break;


        case 1:
            mask = 0x000003FFUL;
            break;

    }

    pin_number &= 0x1F;

    return (mask & (1UL << pin_number)) ? 
# 888 "../../../../../../modules/nrfx/hal/nrf_gpio.h" 3 4
                                         1 
# 888 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
                                              : 
# 888 "../../../../../../modules/nrfx/hal/nrf_gpio.h" 3 4
                                                0
# 888 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
                                                     ;
}
# 15 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 1
# 62 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
typedef enum
{
    NRF_SAADC_RESOLUTION_8BIT = (0UL),
    NRF_SAADC_RESOLUTION_10BIT = (1UL),
    NRF_SAADC_RESOLUTION_12BIT = (2UL),
    NRF_SAADC_RESOLUTION_14BIT = (3UL)
} nrf_saadc_resolution_t;


typedef enum
{
    NRF_SAADC_INPUT_DISABLED = (0UL),
    NRF_SAADC_INPUT_AIN0 = (1UL),
    NRF_SAADC_INPUT_AIN1 = (2UL),
    NRF_SAADC_INPUT_AIN2 = (3UL),
    NRF_SAADC_INPUT_AIN3 = (4UL),
    NRF_SAADC_INPUT_AIN4 = (5UL),
    NRF_SAADC_INPUT_AIN5 = (6UL),
    NRF_SAADC_INPUT_AIN6 = (7UL),
    NRF_SAADC_INPUT_AIN7 = (8UL),
    NRF_SAADC_INPUT_VDD = (9UL),

    NRF_SAADC_INPUT_VDDHDIV5 = (0x0DUL)

} nrf_saadc_input_t;


typedef enum
{
    NRF_SAADC_OVERSAMPLE_DISABLED = (0UL),
    NRF_SAADC_OVERSAMPLE_2X = (1UL),
    NRF_SAADC_OVERSAMPLE_4X = (2UL),
    NRF_SAADC_OVERSAMPLE_8X = (3UL),
    NRF_SAADC_OVERSAMPLE_16X = (4UL),
    NRF_SAADC_OVERSAMPLE_32X = (5UL),
    NRF_SAADC_OVERSAMPLE_64X = (6UL),
    NRF_SAADC_OVERSAMPLE_128X = (7UL),
    NRF_SAADC_OVERSAMPLE_256X = (8UL)
} nrf_saadc_oversample_t;


typedef enum
{
    NRF_SAADC_RESISTOR_DISABLED = (0UL),
    NRF_SAADC_RESISTOR_PULLDOWN = (1UL),
    NRF_SAADC_RESISTOR_PULLUP = (2UL),
    NRF_SAADC_RESISTOR_VDD1_2 = (3UL)
} nrf_saadc_resistor_t;


typedef enum
{
    NRF_SAADC_GAIN1_6 = (0UL),
    NRF_SAADC_GAIN1_5 = (1UL),
    NRF_SAADC_GAIN1_4 = (2UL),
    NRF_SAADC_GAIN1_3 = (3UL),
    NRF_SAADC_GAIN1_2 = (4UL),
    NRF_SAADC_GAIN1 = (5UL),
    NRF_SAADC_GAIN2 = (6UL),
    NRF_SAADC_GAIN4 = (7UL),
} nrf_saadc_gain_t;


typedef enum
{
    NRF_SAADC_REFERENCE_INTERNAL = (0UL),
    NRF_SAADC_REFERENCE_VDD4 = (1UL)
} nrf_saadc_reference_t;


typedef enum
{
    NRF_SAADC_ACQTIME_3US = (0UL),
    NRF_SAADC_ACQTIME_5US = (1UL),
    NRF_SAADC_ACQTIME_10US = (2UL),
    NRF_SAADC_ACQTIME_15US = (3UL),
    NRF_SAADC_ACQTIME_20US = (4UL),
    NRF_SAADC_ACQTIME_40US = (5UL)
} nrf_saadc_acqtime_t;


typedef enum
{
    NRF_SAADC_MODE_SINGLE_ENDED = (0UL),
    NRF_SAADC_MODE_DIFFERENTIAL = (1UL)
} nrf_saadc_mode_t;


typedef enum
{
    NRF_SAADC_BURST_DISABLED = (0UL),
    NRF_SAADC_BURST_ENABLED = (1UL)
} nrf_saadc_burst_t;


typedef enum
{
    NRF_SAADC_TASK_START = __builtin_offsetof (NRF_SAADC_Type, TASKS_START),
    NRF_SAADC_TASK_SAMPLE = __builtin_offsetof (NRF_SAADC_Type, TASKS_SAMPLE),
    NRF_SAADC_TASK_STOP = __builtin_offsetof (NRF_SAADC_Type, TASKS_STOP),
    NRF_SAADC_TASK_CALIBRATEOFFSET = __builtin_offsetof (NRF_SAADC_Type, TASKS_CALIBRATEOFFSET),
} nrf_saadc_task_t;


typedef enum
{
    NRF_SAADC_EVENT_STARTED = __builtin_offsetof (NRF_SAADC_Type, EVENTS_STARTED),
    NRF_SAADC_EVENT_END = __builtin_offsetof (NRF_SAADC_Type, EVENTS_END),
    NRF_SAADC_EVENT_DONE = __builtin_offsetof (NRF_SAADC_Type, EVENTS_DONE),
    NRF_SAADC_EVENT_RESULTDONE = __builtin_offsetof (NRF_SAADC_Type, EVENTS_RESULTDONE),
    NRF_SAADC_EVENT_CALIBRATEDONE = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CALIBRATEDONE),
    NRF_SAADC_EVENT_STOPPED = __builtin_offsetof (NRF_SAADC_Type, EVENTS_STOPPED),
    NRF_SAADC_EVENT_CH0_LIMITH = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[0].LIMITH),
    NRF_SAADC_EVENT_CH0_LIMITL = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[0].LIMITL),
    NRF_SAADC_EVENT_CH1_LIMITH = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[1].LIMITH),
    NRF_SAADC_EVENT_CH1_LIMITL = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[1].LIMITL),
    NRF_SAADC_EVENT_CH2_LIMITH = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[2].LIMITH),
    NRF_SAADC_EVENT_CH2_LIMITL = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[2].LIMITL),
    NRF_SAADC_EVENT_CH3_LIMITH = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[3].LIMITH),
    NRF_SAADC_EVENT_CH3_LIMITL = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[3].LIMITL),
    NRF_SAADC_EVENT_CH4_LIMITH = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[4].LIMITH),
    NRF_SAADC_EVENT_CH4_LIMITL = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[4].LIMITL),
    NRF_SAADC_EVENT_CH5_LIMITH = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[5].LIMITH),
    NRF_SAADC_EVENT_CH5_LIMITL = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[5].LIMITL),
    NRF_SAADC_EVENT_CH6_LIMITH = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[6].LIMITH),
    NRF_SAADC_EVENT_CH6_LIMITL = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[6].LIMITL),
    NRF_SAADC_EVENT_CH7_LIMITH = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[7].LIMITH),
    NRF_SAADC_EVENT_CH7_LIMITL = __builtin_offsetof (NRF_SAADC_Type, EVENTS_CH[7].LIMITL)
} nrf_saadc_event_t;


typedef enum
{
    NRF_SAADC_INT_STARTED = (0x1UL << (0UL)),
    NRF_SAADC_INT_END = (0x1UL << (1UL)),
    NRF_SAADC_INT_DONE = (0x1UL << (2UL)),
    NRF_SAADC_INT_RESULTDONE = (0x1UL << (3UL)),
    NRF_SAADC_INT_CALIBRATEDONE = (0x1UL << (4UL)),
    NRF_SAADC_INT_STOPPED = (0x1UL << (5UL)),
    NRF_SAADC_INT_CH0LIMITH = (0x1UL << (6UL)),
    NRF_SAADC_INT_CH0LIMITL = (0x1UL << (7UL)),
    NRF_SAADC_INT_CH1LIMITH = (0x1UL << (8UL)),
    NRF_SAADC_INT_CH1LIMITL = (0x1UL << (9UL)),
    NRF_SAADC_INT_CH2LIMITH = (0x1UL << (10UL)),
    NRF_SAADC_INT_CH2LIMITL = (0x1UL << (11UL)),
    NRF_SAADC_INT_CH3LIMITH = (0x1UL << (12UL)),
    NRF_SAADC_INT_CH3LIMITL = (0x1UL << (13UL)),
    NRF_SAADC_INT_CH4LIMITH = (0x1UL << (14UL)),
    NRF_SAADC_INT_CH4LIMITL = (0x1UL << (15UL)),
    NRF_SAADC_INT_CH5LIMITH = (0x1UL << (16UL)),
    NRF_SAADC_INT_CH5LIMITL = (0x1UL << (17UL)),
    NRF_SAADC_INT_CH6LIMITH = (0x1UL << (18UL)),
    NRF_SAADC_INT_CH6LIMITL = (0x1UL << (19UL)),
    NRF_SAADC_INT_CH7LIMITH = (0x1UL << (20UL)),
    NRF_SAADC_INT_CH7LIMITL = (0x1UL << (21UL)),
    NRF_SAADC_INT_ALL = 0x7FFFFFFFUL
} nrf_saadc_int_mask_t;


typedef enum
{
    NRF_SAADC_LIMIT_LOW = 0,
    NRF_SAADC_LIMIT_HIGH = 1
} nrf_saadc_limit_t;


typedef int16_t nrf_saadc_value_t;


typedef struct
{
    nrf_saadc_resolution_t resolution;
    nrf_saadc_oversample_t oversample;
    nrf_saadc_value_t * buffer;
    uint32_t buffer_size;
} nrf_saadc_config_t;


typedef struct
{
    nrf_saadc_resistor_t resistor_p;
    nrf_saadc_resistor_t resistor_n;
    nrf_saadc_gain_t gain;
    nrf_saadc_reference_t reference;
    nrf_saadc_acqtime_t acq_time;
    nrf_saadc_mode_t mode;
    nrf_saadc_burst_t burst;
    nrf_saadc_input_t pin_p;
    nrf_saadc_input_t pin_n;
} nrf_saadc_channel_config_t;







static inline void nrf_saadc_task_trigger(nrf_saadc_task_t task);
# 268 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline uint32_t nrf_saadc_task_address_get(nrf_saadc_task_t task);
# 278 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline 
# 278 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
               _Bool 
# 278 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
                    nrf_saadc_event_check(nrf_saadc_event_t event);






static inline void nrf_saadc_event_clear(nrf_saadc_event_t event);
# 294 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline uint32_t nrf_saadc_event_address_get(nrf_saadc_event_t event);
# 343 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline volatile uint32_t * nrf_saadc_event_limit_address_get(uint8_t channel,
                                                                      nrf_saadc_limit_t limit_type);
# 354 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline nrf_saadc_event_t nrf_saadc_limit_event_get(uint8_t channel,
                                                            nrf_saadc_limit_t limit_type);
# 364 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline void nrf_saadc_channel_input_set(uint8_t channel,
                                                 nrf_saadc_input_t pselp,
                                                 nrf_saadc_input_t pseln);







static inline void nrf_saadc_channel_pos_input_set(uint8_t channel,
                                                     nrf_saadc_input_t pselp);
# 384 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline void nrf_saadc_channel_limits_set(uint8_t channel, int16_t low, int16_t high);






static inline void nrf_saadc_int_set(uint32_t mask);






static inline void nrf_saadc_int_enable(uint32_t saadc_int_mask);
# 408 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline 
# 408 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
               _Bool 
# 408 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
                    nrf_saadc_int_enable_check(uint32_t saadc_int_mask);






static inline void nrf_saadc_int_disable(uint32_t saadc_int_mask);
# 425 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline uint32_t nrf_saadc_limit_int_get(uint8_t channel, nrf_saadc_limit_t limit_type);
# 435 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline 
# 435 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
               _Bool 
# 435 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
                    nrf_saadc_busy_check(void);






static inline void nrf_saadc_enable(void);




static inline void nrf_saadc_disable(void);







static inline 
# 455 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
               _Bool 
# 455 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
                    nrf_saadc_enable_check(void);







static inline void nrf_saadc_buffer_init(nrf_saadc_value_t * p_buffer,
                                           uint32_t size);






static inline void nrf_saadc_buffer_pointer_set(nrf_saadc_value_t * p_buffer);






static inline nrf_saadc_value_t * nrf_saadc_buffer_pointer_get(void);







static inline uint16_t nrf_saadc_amount_get(void);






static inline void nrf_saadc_resolution_set(nrf_saadc_resolution_t resolution);






static inline nrf_saadc_resolution_t nrf_saadc_resolution_get(void);






static inline void nrf_saadc_oversample_set(nrf_saadc_oversample_t oversample);






static inline nrf_saadc_oversample_t nrf_saadc_oversample_get(void);
# 524 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline uint32_t nrf_saadc_oversample_sample_count_get(nrf_saadc_oversample_t oversample);
# 538 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline void nrf_saadc_continuous_mode_enable(uint16_t cc);







static inline 
# 546 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
               _Bool 
# 546 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
                    nrf_saadc_continuous_mode_enable_check(void);






static inline void nrf_saadc_continuous_mode_disable(void);







static inline void nrf_saadc_channel_init(uint8_t channel,
                                            nrf_saadc_channel_config_t const * const config);







static inline void nrf_saadc_burst_set(uint8_t channel,
                                         nrf_saadc_burst_t burst);
# 582 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline nrf_saadc_value_t nrf_saadc_value_min_get(nrf_saadc_resolution_t resolution);
# 593 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline nrf_saadc_value_t nrf_saadc_value_max_get(nrf_saadc_resolution_t resolution);



static inline void nrf_saadc_task_trigger(nrf_saadc_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)((NRF_SAADC_Type*) 0x40007000UL) + (uint32_t)task)) = 0x1UL;
}

static inline uint32_t nrf_saadc_task_address_get(nrf_saadc_task_t task)
{
    return (uint32_t)((uint8_t *)((NRF_SAADC_Type*) 0x40007000UL) + (uint32_t)task);
}

static inline 
# 607 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
               _Bool 
# 607 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
                    nrf_saadc_event_check(nrf_saadc_event_t event)
{
    return (
# 609 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
           _Bool
# 609 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
               )*(volatile uint32_t *)((uint8_t *)((NRF_SAADC_Type*) 0x40007000UL) + (uint32_t)event);
}

static inline void nrf_saadc_event_clear(nrf_saadc_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)((NRF_SAADC_Type*) 0x40007000UL) + (uint32_t)event)) = 0x0UL;

    volatile uint32_t dummy = *((volatile uint32_t *)((uint8_t *)((NRF_SAADC_Type*) 0x40007000UL) + (uint32_t)event));
    (void)dummy;

}

static inline uint32_t nrf_saadc_event_address_get(nrf_saadc_event_t event)
{
    return (uint32_t )((uint8_t *)((NRF_SAADC_Type*) 0x40007000UL) + (uint32_t)event);
}
# 652 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
static inline volatile uint32_t * nrf_saadc_event_limit_address_get(uint8_t channel,
                                                                      nrf_saadc_limit_t limit_type)
{
    if (0) { if (channel < 8) { } else { assert_nrf_callback((uint16_t)655, (uint8_t *)"../../../../../../modules/nrfx/hal/nrf_saadc.h"); } };
    if (limit_type == NRF_SAADC_LIMIT_HIGH)
    {
        return &((NRF_SAADC_Type*) 0x40007000UL)->EVENTS_CH[channel].LIMITH;
    }
    else
    {
        return &((NRF_SAADC_Type*) 0x40007000UL)->EVENTS_CH[channel].LIMITL;
    }
}

static inline nrf_saadc_event_t nrf_saadc_limit_event_get(uint8_t channel,
                                                            nrf_saadc_limit_t limit_type)
{
    if (limit_type == NRF_SAADC_LIMIT_HIGH)
    {
        return (nrf_saadc_event_t)( (uint32_t) NRF_SAADC_EVENT_CH0_LIMITH +
                        (uint32_t) (NRF_SAADC_EVENT_CH1_LIMITH - NRF_SAADC_EVENT_CH0_LIMITH)
                        * (uint32_t) channel );
    }
    else
    {
        return (nrf_saadc_event_t)( (uint32_t) NRF_SAADC_EVENT_CH0_LIMITL +
                        (uint32_t) (NRF_SAADC_EVENT_CH1_LIMITL - NRF_SAADC_EVENT_CH0_LIMITL)
                        * (uint32_t) channel );
    }
}

static inline void nrf_saadc_channel_input_set(uint8_t channel,
                                                 nrf_saadc_input_t pselp,
                                                 nrf_saadc_input_t pseln)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->CH[channel].PSELN = pseln;
    ((NRF_SAADC_Type*) 0x40007000UL)->CH[channel].PSELP = pselp;
}

static inline void nrf_saadc_channel_pos_input_set(uint8_t channel,
                                                     nrf_saadc_input_t pselp)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->CH[channel].PSELP = pselp;
}

static inline void nrf_saadc_channel_limits_set(uint8_t channel, int16_t low, int16_t high)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->CH[channel].LIMIT = (
            (((uint32_t) low << (0UL)) & (0xFFFFUL << (0UL)))
          | (((uint32_t) high << (16UL)) & (0xFFFFUL << (16UL))));
}

static inline void nrf_saadc_int_set(uint32_t mask)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->INTEN = mask;
}

static inline void nrf_saadc_int_enable(uint32_t saadc_int_mask)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->INTENSET = saadc_int_mask;
}

static inline 
# 714 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
               _Bool 
# 714 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
                    nrf_saadc_int_enable_check(uint32_t saadc_int_mask)
{
    return (
# 716 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
           _Bool
# 716 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
               )(((NRF_SAADC_Type*) 0x40007000UL)->INTENSET & saadc_int_mask);
}

static inline void nrf_saadc_int_disable(uint32_t saadc_int_mask)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->INTENCLR = saadc_int_mask;
}

static inline uint32_t nrf_saadc_limit_int_get(uint8_t channel, nrf_saadc_limit_t limit_type)
{
    if (0) { if (channel < 8) { } else { assert_nrf_callback((uint16_t)726, (uint8_t *)"../../../../../../modules/nrfx/hal/nrf_saadc.h"); } };
    uint32_t mask = (limit_type == NRF_SAADC_LIMIT_LOW) ?
                     NRF_SAADC_INT_CH0LIMITL : NRF_SAADC_INT_CH0LIMITH;
    return mask << (channel * 2);
}

static inline 
# 732 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
               _Bool 
# 732 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
                    nrf_saadc_busy_check(void)
{


    return ((NRF_SAADC_Type*) 0x40007000UL)->STATUS;
}

static inline void nrf_saadc_enable(void)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->ENABLE = ((1UL) << (0UL));
}

static inline void nrf_saadc_disable(void)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->ENABLE = ((0UL) << (0UL));
}

static inline 
# 749 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
               _Bool 
# 749 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
                    nrf_saadc_enable_check(void)
{

    return ((NRF_SAADC_Type*) 0x40007000UL)->ENABLE;
}

static inline void nrf_saadc_buffer_init(nrf_saadc_value_t * p_buffer,
                                           uint32_t size)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->RESULT.PTR = (uint32_t)p_buffer;
    ((NRF_SAADC_Type*) 0x40007000UL)->RESULT.MAXCNT = size;
}

static inline void nrf_saadc_buffer_pointer_set(nrf_saadc_value_t * p_buffer)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->RESULT.PTR = (uint32_t)p_buffer;
}

static inline nrf_saadc_value_t * nrf_saadc_buffer_pointer_get(void)
{
    return (nrf_saadc_value_t *)((NRF_SAADC_Type*) 0x40007000UL)->RESULT.PTR;
}

static inline uint16_t nrf_saadc_amount_get(void)
{
    return ((NRF_SAADC_Type*) 0x40007000UL)->RESULT.AMOUNT;
}

static inline void nrf_saadc_resolution_set(nrf_saadc_resolution_t resolution)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->RESOLUTION = resolution;
}

static inline nrf_saadc_resolution_t nrf_saadc_resolution_get(void)
{
    return (nrf_saadc_resolution_t)((NRF_SAADC_Type*) 0x40007000UL)->RESOLUTION;
}

static inline uint32_t nrf_saadc_oversample_sample_count_get(nrf_saadc_oversample_t oversample)
{
    return (1 << (uint32_t)oversample);
}

static inline void nrf_saadc_oversample_set(nrf_saadc_oversample_t oversample)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->OVERSAMPLE = oversample;
}

static inline nrf_saadc_oversample_t nrf_saadc_oversample_get(void)
{
    return (nrf_saadc_oversample_t)((NRF_SAADC_Type*) 0x40007000UL)->OVERSAMPLE;
}

static inline void nrf_saadc_continuous_mode_enable(uint16_t cc)
{
    if (0) { if ((cc >= 80) && (cc <= 2047)) { } else { assert_nrf_callback((uint16_t)804, (uint8_t *)"../../../../../../modules/nrfx/hal/nrf_saadc.h"); } };
    ((NRF_SAADC_Type*) 0x40007000UL)->SAMPLERATE = ((1UL) << (12UL))
                            | ((uint32_t)cc << (0UL));
}

static inline 
# 809 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
               _Bool 
# 809 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
                    nrf_saadc_continuous_mode_enable_check(void)
{
    return (
# 811 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
           _Bool
# 811 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
               )((((NRF_SAADC_Type*) 0x40007000UL)->SAMPLERATE & (0x1UL << (12UL)))
                   == ((1UL) << (12UL)));
}

static inline void nrf_saadc_continuous_mode_disable(void)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->SAMPLERATE = (0UL) << (12UL);
}

static inline void nrf_saadc_channel_init(uint8_t channel,
                                            nrf_saadc_channel_config_t const * const config)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->CH[channel].CONFIG =
            ((config->resistor_p << (0UL)) & (0x3UL << (0UL)))
            | ((config->resistor_n << (4UL)) & (0x3UL << (4UL)))
            | ((config->gain << (8UL)) & (0x7UL << (8UL)))
            | ((config->reference << (12UL)) & (0x1UL << (12UL)))
            | ((config->acq_time << (16UL)) & (0x7UL << (16UL)))
            | ((config->mode << (20UL)) & (0x1UL << (20UL)))
            | ((config->burst << (24UL)) & (0x1UL << (24UL)));
    nrf_saadc_channel_input_set(channel, config->pin_p, config->pin_n);
}

static inline void nrf_saadc_burst_set(uint8_t channel,
                                         nrf_saadc_burst_t burst)
{
    ((NRF_SAADC_Type*) 0x40007000UL)->CH[channel].CONFIG =
        (((NRF_SAADC_Type*) 0x40007000UL)->CH[channel].CONFIG & ~(0x1UL << (24UL))) |
        (burst << (24UL));
}

static inline nrf_saadc_value_t nrf_saadc_value_min_get(nrf_saadc_resolution_t resolution)
{
    uint8_t res_bits = 0;
    switch (resolution)
    {
        case NRF_SAADC_RESOLUTION_8BIT:
            res_bits = 8;
            break;
        case NRF_SAADC_RESOLUTION_10BIT:
            res_bits = 10;
            break;
        case NRF_SAADC_RESOLUTION_12BIT:
            res_bits = 12;
            break;
        case NRF_SAADC_RESOLUTION_14BIT:
            res_bits = 14;
            break;
        default:
            if (0) { if (
# 860 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
           0
# 860 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
           ) { } else { assert_nrf_callback((uint16_t)860, (uint8_t *)"../../../../../../modules/nrfx/hal/nrf_saadc.h"); } };
    }
    return (nrf_saadc_value_t)(-(1 << res_bits));
}

static inline nrf_saadc_value_t nrf_saadc_value_max_get(nrf_saadc_resolution_t resolution)
{
    uint8_t res_bits = 0;
    switch (resolution)
    {
        case NRF_SAADC_RESOLUTION_8BIT:
            res_bits = 8;
            break;
        case NRF_SAADC_RESOLUTION_10BIT:
            res_bits = 10;
            break;
        case NRF_SAADC_RESOLUTION_12BIT:
            res_bits = 12;
            break;
        case NRF_SAADC_RESOLUTION_14BIT:
            res_bits = 14;
            break;
        default:
            if (0) { if (
# 883 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 3 4
           0
# 883 "../../../../../../modules/nrfx/hal/nrf_saadc.h"
           ) { } else { assert_nrf_callback((uint16_t)883, (uint8_t *)"../../../../../../modules/nrfx/hal/nrf_saadc.h"); } };
    }
    return (nrf_saadc_value_t)((1 << res_bits) - 1);
}
# 16 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../integration/nrfx/legacy/nrf_drv_saadc.h" 1
# 44 "../../../../../../integration/nrfx/legacy/nrf_drv_saadc.h"
# 1 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h" 1
# 45 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h"
# 1 "../../../../../../modules/nrfx/hal/nrf_saadc.h" 1
# 46 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h" 2
# 115 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h"
typedef struct
{
    nrf_saadc_resolution_t resolution;
    nrf_saadc_oversample_t oversample;
    uint8_t interrupt_priority;
    
# 120 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h" 3 4
   _Bool 
# 120 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h"
                          low_power_mode;
} nrfx_saadc_config_t;


typedef enum
{
    NRFX_SAADC_EVT_DONE,
    NRFX_SAADC_EVT_LIMIT,
    NRFX_SAADC_EVT_CALIBRATEDONE
} nrfx_saadc_evt_type_t;


typedef struct
{
    nrf_saadc_value_t * p_buffer;
    uint16_t size;
} nrfx_saadc_done_evt_t;


typedef struct
{
    uint8_t channel;
    nrf_saadc_limit_t limit_type;
} nrfx_saadc_limit_evt_t;


typedef struct
{
    nrfx_saadc_evt_type_t type;
    union
    {
        nrfx_saadc_done_evt_t done;
        nrfx_saadc_limit_evt_t limit;
    } data;
} nrfx_saadc_evt_t;







typedef void (* nrfx_saadc_event_handler_t)(nrfx_saadc_evt_t const * p_event);
# 174 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h"
nrfx_err_t nrfx_saadc_init(nrfx_saadc_config_t const * p_config,
                           nrfx_saadc_event_handler_t event_handler);






void nrfx_saadc_uninit(void);







uint32_t nrfx_saadc_sample_task_get(void);
# 204 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h"
nrfx_err_t nrfx_saadc_channel_init(uint8_t channel,
                                   nrf_saadc_channel_config_t const * const p_config);
# 215 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h"
nrfx_err_t nrfx_saadc_channel_uninit(uint8_t channel);







nrfx_err_t nrfx_saadc_sample(void);
# 239 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h"
nrfx_err_t nrfx_saadc_sample_convert(uint8_t channel, nrf_saadc_value_t * p_value);
# 260 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h"
nrfx_err_t nrfx_saadc_buffer_convert(nrf_saadc_value_t * buffer, uint16_t size);
# 273 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h"
nrfx_err_t nrfx_saadc_calibrate_offset(void);








# 281 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h" 3 4
_Bool 
# 281 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h"
    nrfx_saadc_is_busy(void);
# 293 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h"
void nrfx_saadc_abort(void);
# 310 "../../../../../../modules/nrfx/drivers/include/nrfx_saadc.h"
void nrfx_saadc_limits_set(uint8_t channel, int16_t limit_low, int16_t limit_high);




void SAADC_IRQHandler(void);
# 45 "../../../../../../integration/nrfx/legacy/nrf_drv_saadc.h" 2
# 59 "../../../../../../integration/nrfx/legacy/nrf_drv_saadc.h"
typedef nrfx_saadc_config_t nrf_drv_saadc_config_t;
# 126 "../../../../../../integration/nrfx/legacy/nrf_drv_saadc.h"
static inline ret_code_t nrf_drv_saadc_init(nrf_drv_saadc_config_t const * p_config,
                                              nrfx_saadc_event_handler_t event_handler)
{
    if (p_config == 
# 129 "../../../../../../integration/nrfx/legacy/nrf_drv_saadc.h" 3 4
                   0
# 129 "../../../../../../integration/nrfx/legacy/nrf_drv_saadc.h"
                       )
    {
        static const nrfx_saadc_config_t default_config = { .resolution = (nrf_saadc_resolution_t)1, .oversample = (nrf_saadc_oversample_t)0, .interrupt_priority = 6, .low_power_mode = 0 };
        p_config = &default_config;
    }
    return nrfx_saadc_init(p_config, event_handler);
}
# 17 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2

# 1 "../../../../../../components/softdevice/s113/headers/ble_hci.h" 1
# 19 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../components/ble/common/ble_advdata.h" 1
# 54 "../../../../../../components/ble/common/ble_advdata.h"
# 1 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 1 3 4
# 84 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4

# 84 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
void *memcpy(void *__s1, const void *__s2, size_t __n);
# 99 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
void *memcpy_fast(void *__s1, const void *__s2, size_t __n);
# 118 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
void *memccpy(void *__s1, const void *__s2, int __c, size_t __n);
# 132 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
void *mempcpy(void *__s1, const void *__s2, size_t __n);
# 147 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
void *memmove(void *__s1, const void *__s2, size_t __n);
# 158 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
int memcmp(const void *__s1, const void *__s2, size_t __n);
# 172 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
void *memchr(const void *__s, int __c, size_t __n);
# 182 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
void *memset(void *__s, int __c, size_t __n);
# 193 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strcpy(char *__s1, const char *__s2);
# 213 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strncpy(char *__s1, const char *__s2, size_t __n);
# 230 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
size_t strlcpy(char *__s1, const char *__s2, size_t __n);
# 243 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strcat(char *__s1, const char *__s2);
# 257 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strncat(char *__s1, const char *__s2, size_t __n);
# 278 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
size_t strlcat(char *__s1, const char *__s2, size_t __n);
# 288 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
int strcmp(const char *__s1, const char *__s2);
# 301 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
int strncmp(const char *__s1, const char *__s2, size_t __n);
# 313 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
int strcasecmp(const char *__s1, const char *__s2);
# 328 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
int strncasecmp(const char *__s1, const char *__s2, size_t __n);
# 340 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strchr(const char *__s, int __c);
# 352 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strnchr(const char *__str, size_t __n, int __ch);
# 363 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
size_t strcspn(const char *__s1, const char *__s2);
# 374 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strpbrk(const char *__s1, const char *__s2);
# 386 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strrchr(const char *__s, int __c);
# 397 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
size_t strspn(const char *__s1, const char *__s2);
# 410 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strstr(const char *__s1, const char *__s2);
# 425 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strnstr(const char *__s1, const char *__s2, size_t __n);
# 440 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strcasestr(const char *__s1, const char *__s2);
# 456 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strncasestr(const char *__s1, const char *__s2, size_t __n);







size_t strlen(const char *__s);
# 475 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
size_t strnlen(const char *__s, size_t __n);
# 509 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strtok(char *__s1, const char *__s2);
# 528 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strsep(char **__stringp, const char *__delim);
# 541 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strtok_r(char *__s1, const char *__s2, char **__s3);
# 555 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strdup(const char *__s1);
# 573 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strndup(const char *__s1, size_t __n);
# 586 "/usr/share/segger_embedded_studio_for_arm_5.30/include/string.h" 3 4
char *strerror(int __num);

char *stpcpy(char *dest, const char *src);
int strcoll(const char *__str1, const char *__str2);
size_t strxfrm( char *__str1, const char *__str2, size_t __num);
# 55 "../../../../../../components/ble/common/ble_advdata.h" 2
# 1 "../../../../../../components/softdevice/s113/headers/ble.h" 1
# 55 "../../../../../../components/softdevice/s113/headers/ble.h"
# 1 "../../../../../../components/softdevice/s113/headers/ble_err.h" 1
# 56 "../../../../../../components/softdevice/s113/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s113/headers/ble_gap.h" 1
# 51 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
# 1 "../../../../../../components/softdevice/s113/headers/ble_hci.h" 1
# 52 "../../../../../../components/softdevice/s113/headers/ble_gap.h" 2
# 1 "../../../../../../components/softdevice/s113/headers/ble_ranges.h" 1
# 53 "../../../../../../components/softdevice/s113/headers/ble_gap.h" 2
# 1 "../../../../../../components/softdevice/s113/headers/ble_types.h" 1
# 186 "../../../../../../components/softdevice/s113/headers/ble_types.h"

# 186 "../../../../../../components/softdevice/s113/headers/ble_types.h"
typedef struct
{
  uint8_t uuid128[16];
} ble_uuid128_t;


typedef struct
{
  uint16_t uuid;
  uint8_t type;
} ble_uuid_t;


typedef struct
{
  uint8_t *p_data;
  uint16_t len;
} ble_data_t;
# 54 "../../../../../../components/softdevice/s113/headers/ble_gap.h" 2
# 65 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
enum BLE_GAP_SVCS
{
  SD_BLE_GAP_ADDR_SET = 0x6C,
  SD_BLE_GAP_ADDR_GET = 0x6C + 1,
  SD_BLE_GAP_WHITELIST_SET = 0x6C + 2,
  SD_BLE_GAP_DEVICE_IDENTITIES_SET = 0x6C + 3,
  SD_BLE_GAP_PRIVACY_SET = 0x6C + 4,
  SD_BLE_GAP_PRIVACY_GET = 0x6C + 5,
  SD_BLE_GAP_ADV_SET_CONFIGURE = 0x6C + 6,
  SD_BLE_GAP_ADV_START = 0x6C + 7,
  SD_BLE_GAP_ADV_STOP = 0x6C + 8,
  SD_BLE_GAP_CONN_PARAM_UPDATE = 0x6C + 9,
  SD_BLE_GAP_DISCONNECT = 0x6C + 10,
  SD_BLE_GAP_TX_POWER_SET = 0x6C + 11,
  SD_BLE_GAP_APPEARANCE_SET = 0x6C + 12,
  SD_BLE_GAP_APPEARANCE_GET = 0x6C + 13,
  SD_BLE_GAP_PPCP_SET = 0x6C + 14,
  SD_BLE_GAP_PPCP_GET = 0x6C + 15,
  SD_BLE_GAP_DEVICE_NAME_SET = 0x6C + 16,
  SD_BLE_GAP_DEVICE_NAME_GET = 0x6C + 17,
  SD_BLE_GAP_AUTHENTICATE = 0x6C + 18,
  SD_BLE_GAP_SEC_PARAMS_REPLY = 0x6C + 19,
  SD_BLE_GAP_AUTH_KEY_REPLY = 0x6C + 20,
  SD_BLE_GAP_LESC_DHKEY_REPLY = 0x6C + 21,
  SD_BLE_GAP_KEYPRESS_NOTIFY = 0x6C + 22,
  SD_BLE_GAP_LESC_OOB_DATA_GET = 0x6C + 23,
  SD_BLE_GAP_LESC_OOB_DATA_SET = 0x6C + 24,
  SD_BLE_GAP_SEC_INFO_REPLY = 0x6C + 26,
  SD_BLE_GAP_CONN_SEC_GET = 0x6C + 27,
  SD_BLE_GAP_RSSI_START = 0x6C + 28,
  SD_BLE_GAP_RSSI_STOP = 0x6C + 29,
  SD_BLE_GAP_RSSI_GET = 0x6C + 34,
  SD_BLE_GAP_PHY_UPDATE = 0x6C + 35,
  SD_BLE_GAP_DATA_LENGTH_UPDATE = 0x6C + 36,
  SD_BLE_GAP_ADV_ADDR_GET = 0x6C + 39,
  SD_BLE_GAP_NEXT_CONN_EVT_COUNTER_GET = 0x6C + 40,
  SD_BLE_GAP_CONN_EVT_TRIGGER_START = 0x6C + 41,
  SD_BLE_GAP_CONN_EVT_TRIGGER_STOP = 0x6C + 42,
};




enum BLE_GAP_EVTS
{
  BLE_GAP_EVT_CONNECTED = 0x10,
  BLE_GAP_EVT_DISCONNECTED = 0x10 + 1,
  BLE_GAP_EVT_CONN_PARAM_UPDATE = 0x10 + 2,
  BLE_GAP_EVT_SEC_PARAMS_REQUEST = 0x10 + 3,
  BLE_GAP_EVT_SEC_INFO_REQUEST = 0x10 + 4,
  BLE_GAP_EVT_PASSKEY_DISPLAY = 0x10 + 5,
  BLE_GAP_EVT_KEY_PRESSED = 0x10 + 6,
  BLE_GAP_EVT_AUTH_KEY_REQUEST = 0x10 + 7,
  BLE_GAP_EVT_LESC_DHKEY_REQUEST = 0x10 + 8,
  BLE_GAP_EVT_AUTH_STATUS = 0x10 + 9,
  BLE_GAP_EVT_CONN_SEC_UPDATE = 0x10 + 10,
  BLE_GAP_EVT_TIMEOUT = 0x10 + 11,
  BLE_GAP_EVT_RSSI_CHANGED = 0x10 + 12,
  BLE_GAP_EVT_SEC_REQUEST = 0x10 + 14,

  BLE_GAP_EVT_SCAN_REQ_REPORT = 0x10 + 16,
  BLE_GAP_EVT_PHY_UPDATE_REQUEST = 0x10 + 17,
  BLE_GAP_EVT_PHY_UPDATE = 0x10 + 18,
  BLE_GAP_EVT_DATA_LENGTH_UPDATE_REQUEST = 0x10 + 19,
  BLE_GAP_EVT_DATA_LENGTH_UPDATE = 0x10 + 20,
  BLE_GAP_EVT_ADV_SET_TERMINATED = 0x10 + 22,
};




enum BLE_GAP_OPTS
{
  BLE_GAP_OPT_CH_MAP = 0x20,
  BLE_GAP_OPT_LOCAL_CONN_LATENCY = 0x20 + 1,
  BLE_GAP_OPT_PASSKEY = 0x20 + 2,
  BLE_GAP_OPT_AUTH_PAYLOAD_TIMEOUT = 0x20 + 4,
  BLE_GAP_OPT_SLAVE_LATENCY_DISABLE = 0x20 + 5,
};





enum BLE_GAP_CFGS
{
  BLE_GAP_CFG_ROLE_COUNT = 0x40,
  BLE_GAP_CFG_DEVICE_NAME = 0x40 + 1,
  BLE_GAP_CFG_PPCP_INCL_CONFIG = 0x40 + 2,

  BLE_GAP_CFG_CAR_INCL_CONFIG = 0x40 + 3,

};



enum BLE_GAP_TX_POWER_ROLES
{
  BLE_GAP_TX_POWER_ROLE_ADV = 1,
  BLE_GAP_TX_POWER_ROLE_CONN = 3,
};
# 571 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  uint8_t type;
  uint8_t anonymous : 1;
  uint8_t include_tx_power : 1;
} ble_gap_adv_properties_t;




typedef struct
{
  uint8_t addr_id_peer : 1;





  uint8_t addr_type : 7;
  uint8_t addr[(6)];
} ble_gap_addr_t;
# 605 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  uint16_t min_conn_interval;
  uint16_t max_conn_interval;
  uint16_t slave_latency;
  uint16_t conn_sup_timeout;
} ble_gap_conn_params_t;
# 624 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  uint8_t sm : 4;
  uint8_t lv : 4;

} ble_gap_conn_sec_mode_t;



typedef struct
{
  ble_gap_conn_sec_mode_t sec_mode;
  uint8_t encr_key_size;
} ble_gap_conn_sec_t;


typedef struct
{
  uint8_t irk[16];
} ble_gap_irk_t;







typedef uint8_t ble_gap_ch_mask_t[5];



typedef struct
{
  ble_gap_adv_properties_t properties;
  ble_gap_addr_t const *p_peer_addr;
# 670 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
  uint32_t interval;



  uint16_t duration;




  uint8_t max_adv_evts;







  ble_gap_ch_mask_t channel_mask;

  uint8_t filter_policy;
  uint8_t primary_phy;



  uint8_t secondary_phy;
  uint8_t set_id:4;
  uint8_t scan_req_notification:1;





} ble_gap_adv_params_t;
# 715 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  ble_data_t adv_data;



  ble_data_t scan_rsp_data;



} ble_gap_adv_data_t;
# 745 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  uint8_t privacy_mode;
  uint8_t private_addr_type;
  uint16_t private_addr_cycle_s;
  ble_gap_irk_t *p_device_irk;


} ble_gap_privacy_params_t;
# 764 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  uint8_t tx_phys;
  uint8_t rx_phys;
} ble_gap_phys_t;


typedef struct
{
  uint8_t enc : 1;
  uint8_t id : 1;
  uint8_t sign : 1;
  uint8_t link : 1;
} ble_gap_sec_kdist_t;



typedef struct
{
  uint8_t bond : 1;
  uint8_t mitm : 1;
  uint8_t lesc : 1;
  uint8_t keypress : 1;
  uint8_t io_caps : 3;
  uint8_t oob : 1;




  uint8_t min_key_size;
  uint8_t max_key_size;
  ble_gap_sec_kdist_t kdist_own;
  ble_gap_sec_kdist_t kdist_peer;
} ble_gap_sec_params_t;



typedef struct
{
  uint8_t ltk[16];
  uint8_t lesc : 1;
  uint8_t auth : 1;
  uint8_t ltk_len : 6;
} ble_gap_enc_info_t;



typedef struct
{
  uint16_t ediv;
  uint8_t rand[8];
} ble_gap_master_id_t;



typedef struct
{
  uint8_t csrk[16];
} ble_gap_sign_info_t;



typedef struct
{
  uint8_t pk[64];
} ble_gap_lesc_p256_pk_t;



typedef struct
{
  uint8_t key[32];
} ble_gap_lesc_dhkey_t;



typedef struct
{
  ble_gap_addr_t addr;
  uint8_t r[16];
  uint8_t c[16];
} ble_gap_lesc_oob_data_t;



typedef struct
{
  ble_gap_addr_t peer_addr;

  uint8_t role;
  ble_gap_conn_params_t conn_params;
  uint8_t adv_handle;

  ble_gap_adv_data_t adv_data;



} ble_gap_evt_connected_t;



typedef struct
{
  uint8_t reason;
} ble_gap_evt_disconnected_t;



typedef struct
{
  ble_gap_conn_params_t conn_params;
} ble_gap_evt_conn_param_update_t;


typedef struct
{
  ble_gap_phys_t peer_preferred_phys;
} ble_gap_evt_phy_update_request_t;


typedef struct
{
  uint8_t status;
  uint8_t tx_phy;
  uint8_t rx_phy;
} ble_gap_evt_phy_update_t;


typedef struct
{
  ble_gap_sec_params_t peer_params;
} ble_gap_evt_sec_params_request_t;



typedef struct
{
  ble_gap_addr_t peer_addr;
  ble_gap_master_id_t master_id;
  uint8_t enc_info : 1;
  uint8_t id_info : 1;
  uint8_t sign_info : 1;
} ble_gap_evt_sec_info_request_t;



typedef struct
{
  uint8_t passkey[6];
  uint8_t match_request : 1;


} ble_gap_evt_passkey_display_t;


typedef struct
{
  uint8_t kp_not;
} ble_gap_evt_key_pressed_t;



typedef struct
{
  uint8_t key_type;
} ble_gap_evt_auth_key_request_t;


typedef struct
{
  ble_gap_lesc_p256_pk_t *p_pk_peer;

  uint8_t oobd_req :1;
} ble_gap_evt_lesc_dhkey_request_t;





typedef struct
{
  uint8_t lv1 : 1;
  uint8_t lv2 : 1;
  uint8_t lv3 : 1;
  uint8_t lv4 : 1;
} ble_gap_sec_levels_t;



typedef struct
{
  ble_gap_enc_info_t enc_info;
  ble_gap_master_id_t master_id;
} ble_gap_enc_key_t;



typedef struct
{
  ble_gap_irk_t id_info;
  ble_gap_addr_t id_addr_info;
} ble_gap_id_key_t;



typedef struct
{
  ble_gap_enc_key_t *p_enc_key;
  ble_gap_id_key_t *p_id_key;
  ble_gap_sign_info_t *p_sign_key;
  ble_gap_lesc_p256_pk_t *p_pk;

} ble_gap_sec_keys_t;



typedef struct
{
  ble_gap_sec_keys_t keys_own;
  ble_gap_sec_keys_t keys_peer;
} ble_gap_sec_keyset_t;



typedef struct
{
  uint16_t max_tx_octets;
  uint16_t max_rx_octets;
  uint16_t max_tx_time_us;
  uint16_t max_rx_time_us;
} ble_gap_data_length_params_t;



typedef struct
{
  uint16_t tx_payload_limited_octets;
  uint16_t rx_payload_limited_octets;
  uint16_t tx_rx_time_limited_us;
} ble_gap_data_length_limitation_t;



typedef struct
{
  uint8_t auth_status;
  uint8_t error_src : 2;
  uint8_t bonded : 1;
  uint8_t lesc : 1;
  ble_gap_sec_levels_t sm1_levels;
  ble_gap_sec_levels_t sm2_levels;
  ble_gap_sec_kdist_t kdist_own;
  ble_gap_sec_kdist_t kdist_peer;
} ble_gap_evt_auth_status_t;



typedef struct
{
  ble_gap_conn_sec_t conn_sec;
} ble_gap_evt_conn_sec_update_t;



typedef struct
{
  uint8_t src;
} ble_gap_evt_timeout_t;



typedef struct
{
  int8_t rssi;

  uint8_t ch_index;
} ble_gap_evt_rssi_changed_t;


typedef struct
{
  uint8_t reason;

  uint8_t adv_handle;
  uint8_t num_completed_adv_events;

  ble_gap_adv_data_t adv_data;


} ble_gap_evt_adv_set_terminated_t;


typedef struct
{
  uint8_t bond : 1;
  uint8_t mitm : 1;
  uint8_t lesc : 1;
  uint8_t keypress : 1;
} ble_gap_evt_sec_request_t;



typedef struct
{
  uint8_t adv_handle;
  int8_t rssi;

  ble_gap_addr_t peer_addr;

} ble_gap_evt_scan_req_report_t;



typedef struct
{
  ble_gap_data_length_params_t peer_params;
} ble_gap_evt_data_length_update_request_t;



typedef struct
{
  ble_gap_data_length_params_t effective_params;
} ble_gap_evt_data_length_update_t;



typedef struct
{
  uint16_t conn_handle;
  union
  {
    ble_gap_evt_connected_t connected;
    ble_gap_evt_disconnected_t disconnected;
    ble_gap_evt_conn_param_update_t conn_param_update;
    ble_gap_evt_sec_params_request_t sec_params_request;
    ble_gap_evt_sec_info_request_t sec_info_request;
    ble_gap_evt_passkey_display_t passkey_display;
    ble_gap_evt_key_pressed_t key_pressed;
    ble_gap_evt_auth_key_request_t auth_key_request;
    ble_gap_evt_lesc_dhkey_request_t lesc_dhkey_request;
    ble_gap_evt_auth_status_t auth_status;
    ble_gap_evt_conn_sec_update_t conn_sec_update;
    ble_gap_evt_timeout_t timeout;
    ble_gap_evt_rssi_changed_t rssi_changed;
    ble_gap_evt_adv_set_terminated_t adv_set_terminated;
    ble_gap_evt_sec_request_t sec_request;
    ble_gap_evt_scan_req_report_t scan_req_report;
    ble_gap_evt_phy_update_request_t phy_update_request;
    ble_gap_evt_phy_update_t phy_update;
    ble_gap_evt_data_length_update_request_t data_length_update_request;
    ble_gap_evt_data_length_update_t data_length_update;
  } params;
} ble_gap_evt_t;
# 1128 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  uint8_t conn_count;

  uint16_t event_length;




} ble_gap_conn_cfg_t;
# 1151 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  uint8_t adv_set_count;
  uint8_t periph_role_count;
} ble_gap_cfg_role_count_t;
# 1186 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  ble_gap_conn_sec_mode_t write_perm;
  uint8_t vloc:2;
  uint8_t *p_value;
  uint16_t current_len;
  uint16_t max_len;
} ble_gap_cfg_device_name_t;



typedef struct
{
  uint8_t include_cfg;

} ble_gap_cfg_ppcp_incl_cfg_t;



typedef struct
{
  uint8_t include_cfg;

} ble_gap_cfg_car_incl_cfg_t;



typedef union
{
  ble_gap_cfg_role_count_t role_count_cfg;
  ble_gap_cfg_device_name_t device_name_cfg;
  ble_gap_cfg_ppcp_incl_cfg_t ppcp_include_cfg;

  ble_gap_cfg_car_incl_cfg_t car_include_cfg;

} ble_gap_cfg_t;
# 1248 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  uint16_t conn_handle;
  uint8_t ch_map[5];
} ble_gap_opt_ch_map_t;
# 1277 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  uint16_t conn_handle;
  uint16_t requested_latency;
  uint16_t * p_actual_latency;
} ble_gap_opt_local_conn_latency_t;
# 1296 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  uint16_t conn_handle;
  uint8_t disable : 1;
} ble_gap_opt_slave_latency_disable_t;
# 1317 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  uint8_t const * p_passkey;
} ble_gap_opt_passkey_t;
# 1342 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
typedef struct
{
  uint16_t conn_handle;
  uint16_t auth_payload_timeout;
} ble_gap_opt_auth_payload_timeout_t;


typedef union
{
  ble_gap_opt_ch_map_t ch_map;
  ble_gap_opt_local_conn_latency_t local_conn_latency;
  ble_gap_opt_passkey_t passkey;
  ble_gap_opt_auth_payload_timeout_t auth_payload_timeout;
  ble_gap_opt_slave_latency_disable_t slave_latency_disable;
} ble_gap_opt_t;


typedef struct
{
  uint8_t ppi_ch_id;



  uint32_t task_endpoint;
  uint16_t conn_evt_counter_start;
  uint16_t period_in_events;



} ble_gap_conn_event_trigger_t;
# 1404 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1404 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1404 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1404 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1404 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_addr_set(ble_gap_addr_t const *p_addr) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADDR_SET) : "r0" ); }
# 1404 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1404 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1417 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1417 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1417 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1417 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1417 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_addr_get(ble_gap_addr_t *p_addr) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADDR_GET) : "r0" ); }
# 1417 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1417 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1436 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1436 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1436 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1436 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1436 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_adv_addr_get(uint8_t adv_handle, ble_gap_addr_t *p_addr) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADV_ADDR_GET) : "r0" ); }
# 1436 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1436 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1457 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1457 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1457 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1457 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1457 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_whitelist_set(ble_gap_addr_t const * const * pp_wl_addrs, uint8_t len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_WHITELIST_SET) : "r0" ); }
# 1457 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1457 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1485 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1485 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1485 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1485 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1485 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_device_identities_set(ble_gap_id_key_t const * const * pp_id_keys, ble_gap_irk_t const * const * pp_local_irks, uint8_t len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DEVICE_IDENTITIES_SET) : "r0" ); }
# 1485 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1485 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1507 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1507 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1507 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1507 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1507 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_privacy_set(ble_gap_privacy_params_t const *p_privacy_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PRIVACY_SET) : "r0" ); }
# 1507 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1507 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1521 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1521 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1521 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1521 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1521 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_privacy_get(ble_gap_privacy_params_t *p_privacy_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PRIVACY_GET) : "r0" ); }
# 1521 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1521 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1567 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1567 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1567 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1567 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1567 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_adv_set_configure(uint8_t *p_adv_handle, ble_gap_adv_data_t const *p_adv_data, ble_gap_adv_params_t const *p_adv_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADV_SET_CONFIGURE) : "r0" ); }
# 1567 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1567 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1616 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1616 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1616 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1616 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1616 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_adv_start(uint8_t adv_handle, uint8_t conn_cfg_tag) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADV_START) : "r0" ); }
# 1616 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1616 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1631 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1631 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1631 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1631 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1631 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_adv_stop(uint8_t adv_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADV_STOP) : "r0" ); }
# 1631 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1631 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1661 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1661 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1661 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1661 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1661 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_conn_param_update(uint16_t conn_handle, ble_gap_conn_params_t const *p_conn_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_CONN_PARAM_UPDATE) : "r0" ); }
# 1661 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1661 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1685 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1685 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1685 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1685 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1685 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_disconnect(uint16_t conn_handle, uint8_t hci_status_code) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DISCONNECT) : "r0" ); }
# 1685 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1685 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1712 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1712 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1712 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1712 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1712 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_tx_power_set(uint8_t role, uint16_t handle, int8_t tx_power) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_TX_POWER_SET) : "r0" ); }
# 1712 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1712 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1722 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1722 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1722 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1722 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1722 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_appearance_set(uint16_t appearance) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_APPEARANCE_SET) : "r0" ); }
# 1722 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1722 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1732 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1732 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1732 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1732 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1732 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_appearance_get(uint16_t *p_appearance) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_APPEARANCE_GET) : "r0" ); }
# 1732 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1732 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1745 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1745 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1745 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1745 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1745 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_ppcp_set(ble_gap_conn_params_t const *p_conn_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PPCP_SET) : "r0" ); }
# 1745 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1745 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1757 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1757 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1757 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1757 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1757 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_ppcp_get(ble_gap_conn_params_t *p_conn_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PPCP_GET) : "r0" ); }
# 1757 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1757 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1775 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1775 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1775 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1775 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1775 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_device_name_set(ble_gap_conn_sec_mode_t const *p_write_perm, uint8_t const *p_dev_name, uint16_t len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DEVICE_NAME_SET) : "r0" ); }
# 1775 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1775 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1792 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1792 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1792 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1792 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1792 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_device_name_get(uint8_t *p_dev_name, uint16_t *p_len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DEVICE_NAME_GET) : "r0" ); }
# 1792 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1792 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1829 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1829 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1829 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1829 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1829 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_authenticate(uint16_t conn_handle, ble_gap_sec_params_t const *p_sec_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_AUTHENTICATE) : "r0" ); }
# 1829 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1829 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1878 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1878 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1878 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1878 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1878 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_sec_params_reply(uint16_t conn_handle, uint8_t sec_status, ble_gap_sec_params_t const *p_sec_params, ble_gap_sec_keyset_t const *p_sec_keyset) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_SEC_PARAMS_REPLY) : "r0" ); }
# 1878 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1878 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1909 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1909 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1909 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1909 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1909 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_auth_key_reply(uint16_t conn_handle, uint8_t key_type, uint8_t const *p_key) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_AUTH_KEY_REPLY) : "r0" ); }
# 1909 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1909 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1940 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1940 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1940 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1940 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1940 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_lesc_dhkey_reply(uint16_t conn_handle, ble_gap_lesc_dhkey_t const *p_dhkey) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_LESC_DHKEY_REPLY) : "r0" ); }
# 1940 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1940 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1961 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1961 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1961 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1961 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1961 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_keypress_notify(uint16_t conn_handle, uint8_t kp_not) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_KEYPRESS_NOTIFY) : "r0" ); }
# 1961 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1961 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 1981 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1981 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1981 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 1981 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1981 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_lesc_oob_data_get(uint16_t conn_handle, ble_gap_lesc_p256_pk_t const *p_pk_own, ble_gap_lesc_oob_data_t *p_oobd_own) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_LESC_OOB_DATA_GET) : "r0" ); }
# 1981 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1981 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 2011 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2011 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2011 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2011 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2011 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_lesc_oob_data_set(uint16_t conn_handle, ble_gap_lesc_oob_data_t const *p_oobd_own, ble_gap_lesc_oob_data_t const *p_oobd_peer) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_LESC_OOB_DATA_SET) : "r0" ); }
# 2011 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2011 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 2037 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2037 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2037 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2037 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2037 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_sec_info_reply(uint16_t conn_handle, ble_gap_enc_info_t const *p_enc_info, ble_gap_irk_t const *p_id_info, ble_gap_sign_info_t const *p_sign_info) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_SEC_INFO_REPLY) : "r0" ); }
# 2037 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2037 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 2049 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2049 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2049 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2049 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2049 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_conn_sec_get(uint16_t conn_handle, ble_gap_conn_sec_t *p_conn_sec) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_CONN_SEC_GET) : "r0" ); }
# 2049 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2049 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 2075 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2075 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2075 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2075 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2075 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_rssi_start(uint16_t conn_handle, uint8_t threshold_dbm, uint8_t skip_count) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_RSSI_START) : "r0" ); }
# 2075 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2075 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 2094 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2094 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2094 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2094 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2094 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_rssi_stop(uint16_t conn_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_RSSI_STOP) : "r0" ); }
# 2094 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2094 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 2116 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2116 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2116 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2116 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2116 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_rssi_get(uint16_t conn_handle, int8_t *p_rssi, uint8_t *p_ch_index) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_RSSI_GET) : "r0" ); }
# 2116 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2116 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 2167 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2167 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2167 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2167 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2167 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_phy_update(uint16_t conn_handle, ble_gap_phys_t const *p_gap_phys) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PHY_UPDATE) : "r0" ); }
# 2167 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2167 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 2202 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2202 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2202 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2202 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2202 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_data_length_update(uint16_t conn_handle, ble_gap_data_length_params_t const *p_dl_params, ble_gap_data_length_limitation_t *p_dl_limitation) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DATA_LENGTH_UPDATE) : "r0" ); }
# 2202 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2202 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 2227 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2227 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2227 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2227 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2227 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_next_conn_evt_counter_get(uint16_t conn_handle, uint16_t * p_counter) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_NEXT_CONN_EVT_COUNTER_GET) : "r0" ); }
# 2227 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2227 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 2249 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2249 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2249 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2249 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2249 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_conn_evt_trigger_start(uint16_t conn_handle, ble_gap_conn_event_trigger_t const * p_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_CONN_EVT_TRIGGER_START) : "r0" ); }
# 2249 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2249 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 2260 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2260 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2260 "../../../../../../components/softdevice/s113/headers/ble_gap.h"

# 2260 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2260 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_conn_evt_trigger_stop(uint16_t conn_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_CONN_EVT_TRIGGER_STOP) : "r0" ); }
# 2260 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2260 "../../../../../../components/softdevice/s113/headers/ble_gap.h"
 ;
# 57 "../../../../../../components/softdevice/s113/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h" 1
# 85 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
enum BLE_L2CAP_SVCS
{
  SD_BLE_L2CAP_CH_SETUP = 0xB8 + 0,
  SD_BLE_L2CAP_CH_RELEASE = 0xB8 + 1,
  SD_BLE_L2CAP_CH_RX = 0xB8 + 2,
  SD_BLE_L2CAP_CH_TX = 0xB8 + 3,
  SD_BLE_L2CAP_CH_FLOW_CONTROL = 0xB8 + 4,
};


enum BLE_L2CAP_EVTS
{
  BLE_L2CAP_EVT_CH_SETUP_REQUEST = 0x70 + 0,


  BLE_L2CAP_EVT_CH_SETUP_REFUSED = 0x70 + 1,

  BLE_L2CAP_EVT_CH_SETUP = 0x70 + 2,

  BLE_L2CAP_EVT_CH_RELEASED = 0x70 + 3,

  BLE_L2CAP_EVT_CH_SDU_BUF_RELEASED = 0x70 + 4,

  BLE_L2CAP_EVT_CH_CREDIT = 0x70 + 5,

  BLE_L2CAP_EVT_CH_RX = 0x70 + 6,

  BLE_L2CAP_EVT_CH_TX = 0x70 + 7,

};
# 175 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
typedef struct
{
  uint16_t rx_mps;


  uint16_t tx_mps;


  uint8_t rx_queue_size;

  uint8_t tx_queue_size;

  uint8_t ch_count;




} ble_l2cap_conn_cfg_t;


typedef struct
{
  uint16_t rx_mtu;


  uint16_t rx_mps;



  ble_data_t sdu_buf;




} ble_l2cap_ch_rx_params_t;


typedef struct
{
  ble_l2cap_ch_rx_params_t rx_params;
  uint16_t le_psm;

  uint16_t status;


} ble_l2cap_ch_setup_params_t;


typedef struct
{
  uint16_t tx_mtu;

  uint16_t peer_mps;

  uint16_t tx_mps;



  uint16_t credits;
} ble_l2cap_ch_tx_params_t;


typedef struct
{
  ble_l2cap_ch_tx_params_t tx_params;
  uint16_t le_psm;
} ble_l2cap_evt_ch_setup_request_t;


typedef struct
{
  uint8_t source;
  uint16_t status;
} ble_l2cap_evt_ch_setup_refused_t;


typedef struct
{
  ble_l2cap_ch_tx_params_t tx_params;
} ble_l2cap_evt_ch_setup_t;


typedef struct
{
  ble_data_t sdu_buf;



} ble_l2cap_evt_ch_sdu_buf_released_t;


typedef struct
{
  uint16_t credits;
} ble_l2cap_evt_ch_credit_t;


typedef struct
{
  uint16_t sdu_len;
  ble_data_t sdu_buf;



} ble_l2cap_evt_ch_rx_t;


typedef struct
{
  ble_data_t sdu_buf;
} ble_l2cap_evt_ch_tx_t;


typedef struct
{
  uint16_t conn_handle;
  uint16_t local_cid;

  union
  {
    ble_l2cap_evt_ch_setup_request_t ch_setup_request;
    ble_l2cap_evt_ch_setup_refused_t ch_setup_refused;
    ble_l2cap_evt_ch_setup_t ch_setup;
    ble_l2cap_evt_ch_sdu_buf_released_t ch_sdu_buf_released;
    ble_l2cap_evt_ch_credit_t credit;
    ble_l2cap_evt_ch_rx_t rx;
    ble_l2cap_evt_ch_tx_t tx;
  } params;
} ble_l2cap_evt_t;
# 350 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"

# 350 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 350 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"

# 350 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 350 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_setup(uint16_t conn_handle, uint16_t *p_local_cid, ble_l2cap_ch_setup_params_t const *p_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_SETUP) : "r0" ); }
# 350 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 350 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
 ;
# 373 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"

# 373 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 373 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"

# 373 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 373 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_release(uint16_t conn_handle, uint16_t local_cid) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_RELEASE) : "r0" ); }
# 373 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 373 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
 ;
# 407 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"

# 407 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 407 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"

# 407 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 407 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_rx(uint16_t conn_handle, uint16_t local_cid, ble_data_t const *p_sdu_buf) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_RX) : "r0" ); }
# 407 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 407 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
 ;
# 452 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"

# 452 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 452 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"

# 452 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 452 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_tx(uint16_t conn_handle, uint16_t local_cid, ble_data_t const *p_sdu_buf) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_TX) : "r0" ); }
# 452 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 452 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
 ;
# 496 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"

# 496 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 496 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"

# 496 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 496 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_flow_control(uint16_t conn_handle, uint16_t local_cid, uint16_t credits, uint16_t *p_credits) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_FLOW_CONTROL) : "r0" ); }
# 496 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 496 "../../../../../../components/softdevice/s113/headers/ble_l2cap.h"
 ;
# 58 "../../../../../../components/softdevice/s113/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s113/headers/ble_gatt.h" 1
# 190 "../../../../../../components/softdevice/s113/headers/ble_gatt.h"
typedef struct
{
  uint16_t att_mtu;






} ble_gatt_conn_cfg_t;


typedef struct
{

  uint8_t broadcast :1;
  uint8_t read :1;
  uint8_t write_wo_resp :1;
  uint8_t write :1;
  uint8_t notify :1;
  uint8_t indicate :1;
  uint8_t auth_signed_wr :1;
} ble_gatt_char_props_t;


typedef struct
{

  uint8_t reliable_wr :1;
  uint8_t wr_aux :1;
} ble_gatt_char_ext_props_t;
# 59 "../../../../../../components/softdevice/s113/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s113/headers/ble_gattc.h" 1
# 65 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
enum BLE_GATTC_SVCS
{
  SD_BLE_GATTC_PRIMARY_SERVICES_DISCOVER = 0x9B,
  SD_BLE_GATTC_RELATIONSHIPS_DISCOVER,
  SD_BLE_GATTC_CHARACTERISTICS_DISCOVER,
  SD_BLE_GATTC_DESCRIPTORS_DISCOVER,
  SD_BLE_GATTC_ATTR_INFO_DISCOVER,
  SD_BLE_GATTC_CHAR_VALUE_BY_UUID_READ,
  SD_BLE_GATTC_READ,
  SD_BLE_GATTC_CHAR_VALUES_READ,
  SD_BLE_GATTC_WRITE,
  SD_BLE_GATTC_HV_CONFIRM,
  SD_BLE_GATTC_EXCHANGE_MTU_REQUEST,
};




enum BLE_GATTC_EVTS
{
  BLE_GATTC_EVT_PRIM_SRVC_DISC_RSP = 0x30,
  BLE_GATTC_EVT_REL_DISC_RSP,
  BLE_GATTC_EVT_CHAR_DISC_RSP,
  BLE_GATTC_EVT_DESC_DISC_RSP,
  BLE_GATTC_EVT_ATTR_INFO_DISC_RSP,
  BLE_GATTC_EVT_CHAR_VAL_BY_UUID_READ_RSP,
  BLE_GATTC_EVT_READ_RSP,
  BLE_GATTC_EVT_CHAR_VALS_READ_RSP,
  BLE_GATTC_EVT_WRITE_RSP,
  BLE_GATTC_EVT_HVX,
  BLE_GATTC_EVT_EXCHANGE_MTU_RSP,
  BLE_GATTC_EVT_TIMEOUT,
  BLE_GATTC_EVT_WRITE_CMD_TX_COMPLETE
};




enum BLE_GATTC_OPTS
{
  BLE_GATTC_OPT_UUID_DISC = 0x60,
};
# 137 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
typedef struct
{
  uint8_t write_cmd_tx_queue_size;

} ble_gattc_conn_cfg_t;


typedef struct
{
  uint16_t start_handle;
  uint16_t end_handle;
} ble_gattc_handle_range_t;



typedef struct
{
  ble_uuid_t uuid;
  ble_gattc_handle_range_t handle_range;
} ble_gattc_service_t;



typedef struct
{
  uint16_t handle;
  ble_gattc_service_t included_srvc;
} ble_gattc_include_t;



typedef struct
{
  ble_uuid_t uuid;
  ble_gatt_char_props_t char_props;
  uint8_t char_ext_props : 1;
  uint16_t handle_decl;
  uint16_t handle_value;
} ble_gattc_char_t;



typedef struct
{
  uint16_t handle;
  ble_uuid_t uuid;
} ble_gattc_desc_t;



typedef struct
{
  uint8_t write_op;
  uint8_t flags;
  uint16_t handle;
  uint16_t offset;
  uint16_t len;
  uint8_t const *p_value;
} ble_gattc_write_params_t;


typedef struct
{
  uint16_t handle;
  ble_uuid_t uuid;
} ble_gattc_attr_info16_t;


typedef struct
{
  uint16_t handle;
  ble_uuid128_t uuid;
} ble_gattc_attr_info128_t;


typedef struct
{
  uint16_t count;
  ble_gattc_service_t services[1];

} ble_gattc_evt_prim_srvc_disc_rsp_t;


typedef struct
{
  uint16_t count;
  ble_gattc_include_t includes[1];

} ble_gattc_evt_rel_disc_rsp_t;


typedef struct
{
  uint16_t count;
  ble_gattc_char_t chars[1];

} ble_gattc_evt_char_disc_rsp_t;


typedef struct
{
  uint16_t count;
  ble_gattc_desc_t descs[1];

} ble_gattc_evt_desc_disc_rsp_t;


typedef struct
{
  uint16_t count;
  uint8_t format;
  union {
    ble_gattc_attr_info16_t attr_info16[1];


    ble_gattc_attr_info128_t attr_info128[1];


  } info;
} ble_gattc_evt_attr_info_disc_rsp_t;


typedef struct
{
  uint16_t handle;
  uint8_t *p_value;
} ble_gattc_handle_value_t;


typedef struct
{
  uint16_t count;
  uint16_t value_len;
  uint8_t handle_value[1];


} ble_gattc_evt_char_val_by_uuid_read_rsp_t;


typedef struct
{
  uint16_t handle;
  uint16_t offset;
  uint16_t len;
  uint8_t data[1];

} ble_gattc_evt_read_rsp_t;


typedef struct
{
  uint16_t len;
  uint8_t values[1];

} ble_gattc_evt_char_vals_read_rsp_t;


typedef struct
{
  uint16_t handle;
  uint8_t write_op;
  uint16_t offset;
  uint16_t len;
  uint8_t data[1];

} ble_gattc_evt_write_rsp_t;


typedef struct
{
  uint16_t handle;
  uint8_t type;
  uint16_t len;
  uint8_t data[1];

} ble_gattc_evt_hvx_t;


typedef struct
{
  uint16_t server_rx_mtu;
} ble_gattc_evt_exchange_mtu_rsp_t;


typedef struct
{
  uint8_t src;
} ble_gattc_evt_timeout_t;


typedef struct
{
  uint8_t count;
} ble_gattc_evt_write_cmd_tx_complete_t;


typedef struct
{
  uint16_t conn_handle;
  uint16_t gatt_status;
  uint16_t error_handle;
  union
  {
    ble_gattc_evt_prim_srvc_disc_rsp_t prim_srvc_disc_rsp;
    ble_gattc_evt_rel_disc_rsp_t rel_disc_rsp;
    ble_gattc_evt_char_disc_rsp_t char_disc_rsp;
    ble_gattc_evt_desc_disc_rsp_t desc_disc_rsp;
    ble_gattc_evt_char_val_by_uuid_read_rsp_t char_val_by_uuid_read_rsp;
    ble_gattc_evt_read_rsp_t read_rsp;
    ble_gattc_evt_char_vals_read_rsp_t char_vals_read_rsp;
    ble_gattc_evt_write_rsp_t write_rsp;
    ble_gattc_evt_hvx_t hvx;
    ble_gattc_evt_exchange_mtu_rsp_t exchange_mtu_rsp;
    ble_gattc_evt_timeout_t timeout;
    ble_gattc_evt_attr_info_disc_rsp_t attr_info_disc_rsp;
    ble_gattc_evt_write_cmd_tx_complete_t write_cmd_tx_complete;
  } params;
} ble_gattc_evt_t;
# 378 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
typedef struct
{
  uint8_t auto_add_vs_enable : 1;
} ble_gattc_opt_uuid_disc_t;


typedef union
{
  ble_gattc_opt_uuid_disc_t uuid_disc;
} ble_gattc_opt_t;
# 419 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 419 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 419 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 419 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 419 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_primary_services_discover(uint16_t conn_handle, uint16_t start_handle, ble_uuid_t const *p_srvc_uuid) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_PRIMARY_SERVICES_DISCOVER) : "r0" ); }
# 419 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 419 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 ;
# 447 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 447 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 447 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 447 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 447 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_relationships_discover(uint16_t conn_handle, ble_gattc_handle_range_t const *p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_RELATIONSHIPS_DISCOVER) : "r0" ); }
# 447 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 447 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 ;
# 474 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 474 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 474 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 474 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 474 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_characteristics_discover(uint16_t conn_handle, ble_gattc_handle_range_t const *p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_CHARACTERISTICS_DISCOVER) : "r0" ); }
# 474 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 474 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 ;
# 501 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 501 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 501 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 501 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 501 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_descriptors_discover(uint16_t conn_handle, ble_gattc_handle_range_t const *p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_DESCRIPTORS_DISCOVER) : "r0" ); }
# 501 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 501 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 ;
# 528 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 528 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 528 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 528 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 528 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_char_value_by_uuid_read(uint16_t conn_handle, ble_uuid_t const *p_uuid, ble_gattc_handle_range_t const *p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_CHAR_VALUE_BY_UUID_READ) : "r0" ); }
# 528 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 528 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 ;
# 555 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 555 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 555 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 555 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 555 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_read(uint16_t conn_handle, uint16_t handle, uint16_t offset) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_READ) : "r0" ); }
# 555 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 555 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 ;
# 581 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 581 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 581 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 581 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 581 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_char_values_read(uint16_t conn_handle, uint16_t const *p_handles, uint16_t handle_count) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_CHAR_VALUES_READ) : "r0" ); }
# 581 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 581 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 ;
# 628 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 628 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 628 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 628 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 628 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_write(uint16_t conn_handle, ble_gattc_write_params_t const *p_write_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_WRITE) : "r0" ); }
# 628 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 628 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 ;
# 646 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 646 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 646 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 646 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 646 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_hv_confirm(uint16_t conn_handle, uint16_t handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_HV_CONFIRM) : "r0" ); }
# 646 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 646 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 ;
# 664 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 664 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 664 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 664 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 664 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_attr_info_discover(uint16_t conn_handle, ble_gattc_handle_range_t const * p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_ATTR_INFO_DISCOVER) : "r0" ); }
# 664 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 664 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 ;
# 697 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 697 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 697 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"

# 697 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 697 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_exchange_mtu_request(uint16_t conn_handle, uint16_t client_rx_mtu) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_EXCHANGE_MTU_REQUEST) : "r0" ); }
# 697 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 697 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
 ;
# 722 "../../../../../../components/softdevice/s113/headers/ble_gattc.h"
static inline uint32_t sd_ble_gattc_evt_char_val_by_uuid_read_rsp_iter(ble_gattc_evt_t *p_gattc_evt, ble_gattc_handle_value_t *p_iter);





static inline uint32_t sd_ble_gattc_evt_char_val_by_uuid_read_rsp_iter(ble_gattc_evt_t *p_gattc_evt, ble_gattc_handle_value_t *p_iter)
{
  uint32_t value_len = p_gattc_evt->params.char_val_by_uuid_read_rsp.value_len;
  uint8_t *p_first = p_gattc_evt->params.char_val_by_uuid_read_rsp.handle_value;
  uint8_t *p_next = p_iter->p_value ? p_iter->p_value + value_len : p_first;

  if ((p_next - p_first) / (sizeof(uint16_t) + value_len) < p_gattc_evt->params.char_val_by_uuid_read_rsp.count)
  {
    p_iter->handle = (uint16_t)p_next[1] << 8 | p_next[0];
    p_iter->p_value = p_next + sizeof(uint16_t);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x0) + 5);
  }
}
# 60 "../../../../../../components/softdevice/s113/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s113/headers/ble_gatts.h" 1
# 68 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
enum BLE_GATTS_SVCS
{
  SD_BLE_GATTS_SERVICE_ADD = 0xA8,
  SD_BLE_GATTS_INCLUDE_ADD,
  SD_BLE_GATTS_CHARACTERISTIC_ADD,
  SD_BLE_GATTS_DESCRIPTOR_ADD,
  SD_BLE_GATTS_VALUE_SET,
  SD_BLE_GATTS_VALUE_GET,
  SD_BLE_GATTS_HVX,
  SD_BLE_GATTS_SERVICE_CHANGED,
  SD_BLE_GATTS_RW_AUTHORIZE_REPLY,
  SD_BLE_GATTS_SYS_ATTR_SET,
  SD_BLE_GATTS_SYS_ATTR_GET,
  SD_BLE_GATTS_INITIAL_USER_HANDLE_GET,
  SD_BLE_GATTS_ATTR_GET,
  SD_BLE_GATTS_EXCHANGE_MTU_REPLY
};




enum BLE_GATTS_EVTS
{
  BLE_GATTS_EVT_WRITE = 0x50,
  BLE_GATTS_EVT_RW_AUTHORIZE_REQUEST,
  BLE_GATTS_EVT_SYS_ATTR_MISSING,
  BLE_GATTS_EVT_HVC,
  BLE_GATTS_EVT_SC_CONFIRM,
  BLE_GATTS_EVT_EXCHANGE_MTU_REQUEST,
  BLE_GATTS_EVT_TIMEOUT,
  BLE_GATTS_EVT_HVN_TX_COMPLETE
};





enum BLE_GATTS_CFGS
{
  BLE_GATTS_CFG_SERVICE_CHANGED = 0xA0,
  BLE_GATTS_CFG_ATTR_TAB_SIZE,
};
# 208 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
typedef struct
{
  uint8_t hvn_tx_queue_size;

} ble_gatts_conn_cfg_t;


typedef struct
{
  ble_gap_conn_sec_mode_t read_perm;
  ble_gap_conn_sec_mode_t write_perm;
  uint8_t vlen :1;
  uint8_t vloc :2;
  uint8_t rd_auth :1;
  uint8_t wr_auth :1;
} ble_gatts_attr_md_t;



typedef struct
{
  ble_uuid_t const *p_uuid;
  ble_gatts_attr_md_t const *p_attr_md;
  uint16_t init_len;
  uint16_t init_offs;
  uint16_t max_len;
  uint8_t *p_value;


} ble_gatts_attr_t;


typedef struct
{
  uint16_t len;
  uint16_t offset;
  uint8_t *p_value;


} ble_gatts_value_t;



typedef struct
{
  uint8_t format;
  int8_t exponent;
  uint16_t unit;
  uint8_t name_space;
  uint16_t desc;
} ble_gatts_char_pf_t;



typedef struct
{
  ble_gatt_char_props_t char_props;
  ble_gatt_char_ext_props_t char_ext_props;
  uint8_t const *p_char_user_desc;
  uint16_t char_user_desc_max_size;
  uint16_t char_user_desc_size;
  ble_gatts_char_pf_t const *p_char_pf;
  ble_gatts_attr_md_t const *p_user_desc_md;
  ble_gatts_attr_md_t const *p_cccd_md;
  ble_gatts_attr_md_t const *p_sccd_md;
} ble_gatts_char_md_t;



typedef struct
{
  uint16_t value_handle;
  uint16_t user_desc_handle;
  uint16_t cccd_handle;
  uint16_t sccd_handle;
} ble_gatts_char_handles_t;



typedef struct
{
  uint16_t handle;
  uint8_t type;
  uint16_t offset;
  uint16_t *p_len;
  uint8_t const *p_data;
} ble_gatts_hvx_params_t;


typedef struct
{
  uint16_t gatt_status;
  uint8_t update : 1;


  uint16_t offset;
  uint16_t len;
  uint8_t const *p_data;
} ble_gatts_authorize_params_t;


typedef struct
{
  uint8_t type;
  union {
    ble_gatts_authorize_params_t read;
    ble_gatts_authorize_params_t write;
  } params;
} ble_gatts_rw_authorize_reply_params_t;


typedef struct
{
  uint8_t service_changed : 1;
} ble_gatts_cfg_service_changed_t;
# 331 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
typedef struct
{
  uint32_t attr_tab_size;
} ble_gatts_cfg_attr_tab_size_t;


typedef union
{
  ble_gatts_cfg_service_changed_t service_changed;
  ble_gatts_cfg_attr_tab_size_t attr_tab_size;
} ble_gatts_cfg_t;



typedef struct
{
  uint16_t handle;
  ble_uuid_t uuid;
  uint8_t op;
  uint8_t auth_required;
  uint16_t offset;
  uint16_t len;
  uint8_t data[1];

} ble_gatts_evt_write_t;


typedef struct
{
  uint16_t handle;
  ble_uuid_t uuid;
  uint16_t offset;
} ble_gatts_evt_read_t;


typedef struct
{
  uint8_t type;
  union {
    ble_gatts_evt_read_t read;
    ble_gatts_evt_write_t write;
  } request;
} ble_gatts_evt_rw_authorize_request_t;


typedef struct
{
  uint8_t hint;
} ble_gatts_evt_sys_attr_missing_t;



typedef struct
{
  uint16_t handle;
} ble_gatts_evt_hvc_t;


typedef struct
{
  uint16_t client_rx_mtu;
} ble_gatts_evt_exchange_mtu_request_t;


typedef struct
{
  uint8_t src;
} ble_gatts_evt_timeout_t;


typedef struct
{
  uint8_t count;
} ble_gatts_evt_hvn_tx_complete_t;


typedef struct
{
  uint16_t conn_handle;
  union
  {
    ble_gatts_evt_write_t write;
    ble_gatts_evt_rw_authorize_request_t authorize_request;
    ble_gatts_evt_sys_attr_missing_t sys_attr_missing;
    ble_gatts_evt_hvc_t hvc;
    ble_gatts_evt_exchange_mtu_request_t exchange_mtu_request;
    ble_gatts_evt_timeout_t timeout;
    ble_gatts_evt_hvn_tx_complete_t hvn_tx_complete;
  } params;
} ble_gatts_evt_t;
# 446 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 446 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 446 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 446 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 446 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_service_add(uint8_t type, ble_uuid_t const *p_uuid, uint16_t *p_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_SERVICE_ADD) : "r0" ); }
# 446 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 446 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 472 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 472 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 472 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 472 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 472 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_include_add(uint16_t service_handle, uint16_t inc_srvc_handle, uint16_t *p_include_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_INCLUDE_ADD) : "r0" ); }
# 472 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 472 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 501 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 501 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 501 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 501 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 501 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_characteristic_add(uint16_t service_handle, ble_gatts_char_md_t const *p_char_md, ble_gatts_attr_t const *p_attr_char_value, ble_gatts_char_handles_t *p_handles) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_CHARACTERISTIC_ADD) : "r0" ); }
# 501 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 501 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 524 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 524 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 524 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 524 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 524 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_descriptor_add(uint16_t char_handle, ble_gatts_attr_t const *p_attr, uint16_t *p_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_DESCRIPTOR_ADD) : "r0" ); }
# 524 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 524 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 547 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 547 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 547 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 547 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 547 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_value_set(uint16_t conn_handle, uint16_t handle, ble_gatts_value_t *p_value) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_VALUE_SET) : "r0" ); }
# 547 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 547 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 571 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 571 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 571 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 571 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 571 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_value_get(uint16_t conn_handle, uint16_t handle, ble_gatts_value_t *p_value) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_VALUE_GET) : "r0" ); }
# 571 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 571 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 636 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 636 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 636 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 636 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 636 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_hvx(uint16_t conn_handle, ble_gatts_hvx_params_t const *p_hvx_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_HVX) : "r0" ); }
# 636 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 636 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 672 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 672 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 672 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 672 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 672 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_service_changed(uint16_t conn_handle, uint16_t start_handle, uint16_t end_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_SERVICE_CHANGED) : "r0" ); }
# 672 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 672 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 705 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 705 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 705 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 705 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 705 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_rw_authorize_reply(uint16_t conn_handle, ble_gatts_rw_authorize_reply_params_t const *p_rw_authorize_reply_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_RW_AUTHORIZE_REPLY) : "r0" ); }
# 705 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 705 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 749 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 749 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 749 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 749 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 749 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_sys_attr_set(uint16_t conn_handle, uint8_t const *p_sys_attr_data, uint16_t len, uint32_t flags) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_SYS_ATTR_SET) : "r0" ); }
# 749 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 749 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 782 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 782 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 782 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 782 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 782 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_sys_attr_get(uint16_t conn_handle, uint8_t *p_sys_attr_data, uint16_t *p_len, uint32_t flags) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_SYS_ATTR_GET) : "r0" ); }
# 782 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 782 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 792 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 792 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 792 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 792 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 792 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_initial_user_handle_get(uint16_t *p_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_INITIAL_USER_HANDLE_GET) : "r0" ); }
# 792 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 792 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 805 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 805 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 805 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 805 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 805 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_attr_get(uint16_t handle, ble_uuid_t * p_uuid, ble_gatts_attr_md_t * p_md) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_ATTR_GET) : "r0" ); }
# 805 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 805 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 835 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 835 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 835 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"

# 835 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 835 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_exchange_mtu_reply(uint16_t conn_handle, uint16_t server_rx_mtu) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_EXCHANGE_MTU_REPLY) : "r0" ); }
# 835 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 835 "../../../../../../components/softdevice/s113/headers/ble_gatts.h"
 ;
# 61 "../../../../../../components/softdevice/s113/headers/ble.h" 2
# 72 "../../../../../../components/softdevice/s113/headers/ble.h"
enum BLE_COMMON_SVCS
{
  SD_BLE_ENABLE = 0x60,
  SD_BLE_EVT_GET,
  SD_BLE_UUID_VS_ADD,
  SD_BLE_UUID_DECODE,
  SD_BLE_UUID_ENCODE,
  SD_BLE_VERSION_GET,
  SD_BLE_USER_MEM_REPLY,
  SD_BLE_OPT_SET,
  SD_BLE_OPT_GET,
  SD_BLE_CFG_SET,
  SD_BLE_UUID_VS_REMOVE,
};




enum BLE_COMMON_EVTS
{
  BLE_EVT_USER_MEM_REQUEST = 0x01 + 0,

  BLE_EVT_USER_MEM_RELEASE = 0x01 + 1,
};





enum BLE_CONN_CFGS
{
    BLE_CONN_CFG_GAP = 0x20 + 0,
    BLE_CONN_CFG_GATTC = 0x20 + 1,
    BLE_CONN_CFG_GATTS = 0x20 + 2,
    BLE_CONN_CFG_GATT = 0x20 + 3,
    BLE_CONN_CFG_L2CAP = 0x20 + 4,
};





enum BLE_COMMON_CFGS
{
  BLE_COMMON_CFG_VS_UUID = 0x01,
};




enum BLE_COMMON_OPTS
{
  BLE_COMMON_OPT_PA_LNA = 0x01 + 0,
  BLE_COMMON_OPT_CONN_EVT_EXT = 0x01 + 1,
  BLE_COMMON_OPT_EXTENDED_RC_CAL = 0x01 + 2,
};
# 176 "../../../../../../components/softdevice/s113/headers/ble.h"
typedef struct
{
  uint8_t *p_mem;
  uint16_t len;
} ble_user_mem_block_t;


typedef struct
{
  uint8_t type;
} ble_evt_user_mem_request_t;


typedef struct
{
  uint8_t type;
  ble_user_mem_block_t mem_block;
} ble_evt_user_mem_release_t;


typedef struct
{
  uint16_t conn_handle;
  union
  {
    ble_evt_user_mem_request_t user_mem_request;
    ble_evt_user_mem_release_t user_mem_release;
  } params;
} ble_common_evt_t;


typedef struct
{
  uint16_t evt_id;
  uint16_t evt_len;
} ble_evt_hdr_t;


typedef struct
{
  ble_evt_hdr_t header;
  union
  {
    ble_common_evt_t common_evt;
    ble_gap_evt_t gap_evt;
    ble_gattc_evt_t gattc_evt;
    ble_gatts_evt_t gatts_evt;
    ble_l2cap_evt_t l2cap_evt;
  } evt;
} ble_evt_t;





typedef struct
{
  uint8_t version_number;
  uint16_t company_id;
  uint16_t subversion_number;
} ble_version_t;




typedef struct
{
     uint8_t enable :1;
     uint8_t active_high :1;
     uint8_t gpio_pin :6;
} ble_pa_lna_cfg_t;
# 261 "../../../../../../components/softdevice/s113/headers/ble.h"
typedef struct
{
   ble_pa_lna_cfg_t pa_cfg;
   ble_pa_lna_cfg_t lna_cfg;

   uint8_t ppi_ch_id_set;
   uint8_t ppi_ch_id_clr;
   uint8_t gpiote_ch_id;
} ble_common_opt_pa_lna_t;
# 282 "../../../../../../components/softdevice/s113/headers/ble.h"
typedef struct
{
   uint8_t enable : 1;
} ble_common_opt_conn_evt_ext_t;
# 302 "../../../../../../components/softdevice/s113/headers/ble.h"
typedef struct
{
   uint8_t enable : 1;
} ble_common_opt_extended_rc_cal_t;


typedef union
{
  ble_common_opt_pa_lna_t pa_lna;
  ble_common_opt_conn_evt_ext_t conn_evt_ext;
  ble_common_opt_extended_rc_cal_t extended_rc_cal;
} ble_common_opt_t;


typedef union
{
  ble_common_opt_t common_opt;
  ble_gap_opt_t gap_opt;
  ble_gattc_opt_t gattc_opt;
} ble_opt_t;
# 339 "../../../../../../components/softdevice/s113/headers/ble.h"
typedef struct
{
  uint8_t conn_cfg_tag;



  union {
    ble_gap_conn_cfg_t gap_conn_cfg;
    ble_gattc_conn_cfg_t gattc_conn_cfg;
    ble_gatts_conn_cfg_t gatts_conn_cfg;
    ble_gatt_conn_cfg_t gatt_conn_cfg;
    ble_l2cap_conn_cfg_t l2cap_conn_cfg;
  } params;
} ble_conn_cfg_t;






typedef struct
{
  uint8_t vs_uuid_count;


} ble_common_cfg_vs_uuid_t;


typedef union
{
  ble_common_cfg_vs_uuid_t vs_uuid_cfg;
} ble_common_cfg_t;


typedef union
{
  ble_conn_cfg_t conn_cfg;
  ble_common_cfg_t common_cfg;
  ble_gap_cfg_t gap_cfg;
  ble_gatts_cfg_t gatts_cfg;
} ble_cfg_t;
# 431 "../../../../../../components/softdevice/s113/headers/ble.h"

# 431 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic push
# 431 "../../../../../../components/softdevice/s113/headers/ble.h"

# 431 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 431 "../../../../../../components/softdevice/s113/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_enable(uint32_t * p_app_ram_base) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_ENABLE) : "r0" ); }
# 431 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic pop
# 431 "../../../../../../components/softdevice/s113/headers/ble.h"
 ;
# 467 "../../../../../../components/softdevice/s113/headers/ble.h"

# 467 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic push
# 467 "../../../../../../components/softdevice/s113/headers/ble.h"

# 467 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 467 "../../../../../../components/softdevice/s113/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_cfg_set(uint32_t cfg_id, ble_cfg_t const * p_cfg, uint32_t app_ram_base) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_CFG_SET) : "r0" ); }
# 467 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic pop
# 467 "../../../../../../components/softdevice/s113/headers/ble.h"
 ;
# 505 "../../../../../../components/softdevice/s113/headers/ble.h"

# 505 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic push
# 505 "../../../../../../components/softdevice/s113/headers/ble.h"

# 505 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 505 "../../../../../../components/softdevice/s113/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_evt_get(uint8_t *p_dest, uint16_t *p_len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_EVT_GET) : "r0" ); }
# 505 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic pop
# 505 "../../../../../../components/softdevice/s113/headers/ble.h"
 ;
# 534 "../../../../../../components/softdevice/s113/headers/ble.h"

# 534 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic push
# 534 "../../../../../../components/softdevice/s113/headers/ble.h"

# 534 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 534 "../../../../../../components/softdevice/s113/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_uuid_vs_add(ble_uuid128_t const *p_vs_uuid, uint8_t *p_uuid_type) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_UUID_VS_ADD) : "r0" ); }
# 534 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic pop
# 534 "../../../../../../components/softdevice/s113/headers/ble.h"
 ;
# 555 "../../../../../../components/softdevice/s113/headers/ble.h"

# 555 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic push
# 555 "../../../../../../components/softdevice/s113/headers/ble.h"

# 555 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 555 "../../../../../../components/softdevice/s113/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_uuid_vs_remove(uint8_t *p_uuid_type) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_UUID_VS_REMOVE) : "r0" ); }
# 555 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic pop
# 555 "../../../../../../components/softdevice/s113/headers/ble.h"
 ;
# 576 "../../../../../../components/softdevice/s113/headers/ble.h"

# 576 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic push
# 576 "../../../../../../components/softdevice/s113/headers/ble.h"

# 576 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 576 "../../../../../../components/softdevice/s113/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_uuid_decode(uint8_t uuid_le_len, uint8_t const *p_uuid_le, ble_uuid_t *p_uuid) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_UUID_DECODE) : "r0" ); }
# 576 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic pop
# 576 "../../../../../../components/softdevice/s113/headers/ble.h"
 ;
# 591 "../../../../../../components/softdevice/s113/headers/ble.h"

# 591 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic push
# 591 "../../../../../../components/softdevice/s113/headers/ble.h"

# 591 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 591 "../../../../../../components/softdevice/s113/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_uuid_encode(ble_uuid_t const *p_uuid, uint8_t *p_uuid_le_len, uint8_t *p_uuid_le) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_UUID_ENCODE) : "r0" ); }
# 591 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic pop
# 591 "../../../../../../components/softdevice/s113/headers/ble.h"
 ;
# 604 "../../../../../../components/softdevice/s113/headers/ble.h"

# 604 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic push
# 604 "../../../../../../components/softdevice/s113/headers/ble.h"

# 604 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 604 "../../../../../../components/softdevice/s113/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_version_get(ble_version_t *p_version) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_VERSION_GET) : "r0" ); }
# 604 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic pop
# 604 "../../../../../../components/softdevice/s113/headers/ble.h"
 ;
# 630 "../../../../../../components/softdevice/s113/headers/ble.h"

# 630 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic push
# 630 "../../../../../../components/softdevice/s113/headers/ble.h"

# 630 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 630 "../../../../../../components/softdevice/s113/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_user_mem_reply(uint16_t conn_handle, ble_user_mem_block_t const *p_block) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_USER_MEM_REPLY) : "r0" ); }
# 630 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic pop
# 630 "../../../../../../components/softdevice/s113/headers/ble.h"
 ;
# 646 "../../../../../../components/softdevice/s113/headers/ble.h"

# 646 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic push
# 646 "../../../../../../components/softdevice/s113/headers/ble.h"

# 646 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 646 "../../../../../../components/softdevice/s113/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_opt_set(uint32_t opt_id, ble_opt_t const *p_opt) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_OPT_SET) : "r0" ); }
# 646 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic pop
# 646 "../../../../../../components/softdevice/s113/headers/ble.h"
 ;
# 665 "../../../../../../components/softdevice/s113/headers/ble.h"

# 665 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic push
# 665 "../../../../../../components/softdevice/s113/headers/ble.h"

# 665 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 665 "../../../../../../components/softdevice/s113/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_opt_get(uint32_t opt_id, ble_opt_t *p_opt) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_OPT_GET) : "r0" ); }
# 665 "../../../../../../components/softdevice/s113/headers/ble.h"
#pragma GCC diagnostic pop
# 665 "../../../../../../components/softdevice/s113/headers/ble.h"
 ;
# 56 "../../../../../../components/ble/common/ble_advdata.h" 2
# 1 "../../../../../../components/libraries/util/sdk_common.h" 1
# 59 "../../../../../../components/libraries/util/sdk_common.h"
# 1 "../../../../../../components/libraries/util/sdk_os.h" 1
# 60 "../../../../../../components/libraries/util/sdk_common.h" 2

# 1 "../../../../../../components/libraries/util/app_util.h" 1
# 62 "../../../../../../components/libraries/util/sdk_common.h" 2
# 1 "../../../../../../components/libraries/util/sdk_macros.h" 1
# 63 "../../../../../../components/libraries/util/sdk_common.h" 2
# 57 "../../../../../../components/ble/common/ble_advdata.h" 2
# 91 "../../../../../../components/ble/common/ble_advdata.h"
typedef struct
{
  uint8_t tk[16];
} ble_advdata_tk_value_t;



typedef enum
{
    BLE_ADVDATA_ROLE_NOT_PRESENT = 0,
    BLE_ADVDATA_ROLE_ONLY_PERIPH,
    BLE_ADVDATA_ROLE_ONLY_CENTRAL,
    BLE_ADVDATA_ROLE_BOTH_PERIPH_PREFERRED,
    BLE_ADVDATA_ROLE_BOTH_CENTRAL_PREFERRED
} ble_advdata_le_role_t;



typedef enum
{
    BLE_ADVDATA_NO_NAME,
    BLE_ADVDATA_SHORT_NAME,
    BLE_ADVDATA_FULL_NAME
} ble_advdata_name_type_t;


typedef struct
{
    uint16_t uuid_cnt;
    ble_uuid_t * p_uuids;
} ble_advdata_uuid_list_t;


typedef struct
{
    uint16_t min_conn_interval;
    uint16_t max_conn_interval;
} ble_advdata_conn_int_t;


typedef struct
{
    uint16_t company_identifier;
    uint8_array_t data;
} ble_advdata_manuf_data_t;


typedef struct
{
    uint16_t service_uuid;
    uint8_array_t data;
} ble_advdata_service_data_t;



typedef struct
{
    ble_advdata_name_type_t name_type;
    uint8_t short_name_len;
    
# 150 "../../../../../../components/ble/common/ble_advdata.h" 3 4
   _Bool 
# 150 "../../../../../../components/ble/common/ble_advdata.h"
                                include_appearance;
    uint8_t flags;
    int8_t * p_tx_power_level;
    ble_advdata_uuid_list_t uuids_more_available;
    ble_advdata_uuid_list_t uuids_complete;
    ble_advdata_uuid_list_t uuids_solicited;
    ble_advdata_conn_int_t * p_slave_conn_int;
    ble_advdata_manuf_data_t * p_manuf_specific_data;
    ble_advdata_service_data_t * p_service_data_array;
    uint8_t service_data_count;
    
# 160 "../../../../../../components/ble/common/ble_advdata.h" 3 4
   _Bool 
# 160 "../../../../../../components/ble/common/ble_advdata.h"
                                include_ble_device_addr;
    ble_advdata_le_role_t le_role;
    ble_advdata_tk_value_t * p_tk_value;
    uint8_t * p_sec_mgr_oob_flags;
    ble_gap_lesc_oob_data_t * p_lesc_data;
} ble_advdata_t;
# 195 "../../../../../../components/ble/common/ble_advdata.h"
ret_code_t ble_advdata_encode(ble_advdata_t const * const p_advdata,
                              uint8_t * const p_encoded_data,
                              uint16_t * const p_len);
# 226 "../../../../../../components/ble/common/ble_advdata.h"
uint16_t ble_advdata_search(uint8_t const * p_encoded_data,
                            uint16_t data_len,
                            uint16_t * p_offset,
                            uint8_t ad_type);
# 248 "../../../../../../components/ble/common/ble_advdata.h"
uint8_t * ble_advdata_parse(uint8_t * p_encoded_data,
                            uint16_t data_len,
                            uint8_t ad_type);
# 263 "../../../../../../components/ble/common/ble_advdata.h"

# 263 "../../../../../../components/ble/common/ble_advdata.h" 3 4
_Bool 
# 263 "../../../../../../components/ble/common/ble_advdata.h"
    ble_advdata_name_find(uint8_t const * p_encoded_data,
                           uint16_t data_len,
                           char const * p_target_name);
# 285 "../../../../../../components/ble/common/ble_advdata.h"

# 285 "../../../../../../components/ble/common/ble_advdata.h" 3 4
_Bool 
# 285 "../../../../../../components/ble/common/ble_advdata.h"
    ble_advdata_short_name_find(uint8_t const * p_encoded_data,
                                 uint16_t data_len,
                                 char const * p_target_name,
                                 uint8_t const short_name_min_len);
# 300 "../../../../../../components/ble/common/ble_advdata.h"

# 300 "../../../../../../components/ble/common/ble_advdata.h" 3 4
_Bool 
# 300 "../../../../../../components/ble/common/ble_advdata.h"
    ble_advdata_uuid_find(uint8_t const * p_encoded_data,
                           uint16_t data_len,
                           ble_uuid_t const * p_target_uuid);
# 315 "../../../../../../components/ble/common/ble_advdata.h"

# 315 "../../../../../../components/ble/common/ble_advdata.h" 3 4
_Bool 
# 315 "../../../../../../components/ble/common/ble_advdata.h"
    ble_advdata_appearance_find(uint8_t const * p_encoded_data,
                                 uint16_t data_len,
                                 uint16_t const * p_target_appearance);
# 20 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 1
# 62 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
# 1 "../../../../../../components/softdevice/s113/headers/ble_gap.h" 1
# 63 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 2
# 1 "../../../../../../components/softdevice/s113/headers/ble_gattc.h" 1
# 64 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 2
# 83 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
typedef enum
{
    BLE_ADV_MODE_IDLE,
    BLE_ADV_MODE_DIRECTED_HIGH_DUTY,
    BLE_ADV_MODE_DIRECTED,
    BLE_ADV_MODE_FAST,
    BLE_ADV_MODE_SLOW,
} ble_adv_mode_t;
# 99 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
typedef enum
{
    BLE_ADV_EVT_IDLE,
    BLE_ADV_EVT_DIRECTED_HIGH_DUTY,
    BLE_ADV_EVT_DIRECTED,
    BLE_ADV_EVT_FAST,
    BLE_ADV_EVT_SLOW,
    BLE_ADV_EVT_FAST_WHITELIST,
    BLE_ADV_EVT_SLOW_WHITELIST,
    BLE_ADV_EVT_WHITELIST_REQUEST,
    BLE_ADV_EVT_PEER_ADDR_REQUEST
} ble_adv_evt_t;






typedef struct
{
    
# 119 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 119 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_on_disconnect_disabled;
    
# 120 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 120 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_whitelist_enabled;
    
# 121 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 121 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_directed_high_duty_enabled;
    
# 122 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 122 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_directed_enabled;
    
# 123 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 123 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_fast_enabled;
    
# 124 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 124 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_slow_enabled;
    uint32_t ble_adv_directed_interval;
    uint32_t ble_adv_directed_timeout;
    uint32_t ble_adv_fast_interval;
    uint32_t ble_adv_fast_timeout;
    uint32_t ble_adv_slow_interval;
    uint32_t ble_adv_slow_timeout;
    
# 131 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 131 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_extended_enabled;
    uint32_t ble_adv_secondary_phy;
    uint32_t ble_adv_primary_phy;
} ble_adv_modes_config_t;


typedef void (*ble_adv_evt_handler_t) (ble_adv_evt_t const adv_evt);


typedef void (*ble_adv_error_handler_t) (uint32_t nrf_error);

typedef struct
{
    
# 144 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 144 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
                           initialized;
    
# 145 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 145 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
                           advertising_start_pending;
    ble_adv_mode_t adv_mode_current;
    ble_adv_modes_config_t adv_modes_config;
    uint8_t conn_cfg_tag;

    ble_adv_evt_t adv_evt;
    ble_adv_evt_handler_t evt_handler;
    ble_adv_error_handler_t error_handler;

    ble_gap_adv_params_t adv_params;
    uint8_t adv_handle;





    uint8_t enc_advdata[2][(31)];
    uint8_t enc_scan_rsp_data[2][(31)];


    ble_gap_adv_data_t adv_data;
    ble_gap_adv_data_t *p_adv_data;

    uint16_t current_slave_link_conn_handle;
    ble_gap_addr_t peer_address;
    
# 170 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 170 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
                           peer_addr_reply_expected;
    
# 171 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 171 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
                           whitelist_temporarily_disabled;
    
# 172 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 172 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
                           whitelist_reply_expected;
    
# 173 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 173 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
                           whitelist_in_use;
} ble_advertising_t;

typedef struct
{
    uint32_t interval;
    uint32_t timeout;
    
# 180 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 180 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            enabled;
} ble_adv_mode_config_t;





typedef struct
{
    ble_advdata_t advdata;
    ble_advdata_t srdata;
    ble_adv_modes_config_t config;
    ble_adv_evt_handler_t evt_handler;
    ble_adv_error_handler_t error_handler;
} ble_advertising_init_t;
# 205 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
void ble_advertising_on_ble_evt(ble_evt_t const * p_ble_evt, void * p_adv);
# 227 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
uint32_t ble_advertising_init(ble_advertising_t * const p_advertising,
                              ble_advertising_init_t const * const p_init);
# 239 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
void ble_advertising_conn_cfg_tag_set(ble_advertising_t * const p_advertising, uint8_t ble_cfg_tag);
# 252 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
uint32_t ble_advertising_start(ble_advertising_t * const p_advertising,
                               ble_adv_mode_t advertising_mode);
# 268 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
uint32_t ble_advertising_peer_addr_reply(ble_advertising_t * const p_advertising,
                                         ble_gap_addr_t * p_peer_addr);
# 288 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
uint32_t ble_advertising_whitelist_reply(ble_advertising_t * const p_advertising,
                                         ble_gap_addr_t const * p_gap_addrs,
                                         uint32_t addr_cnt,
                                         ble_gap_irk_t const * p_gap_irks,
                                         uint32_t irk_cnt);
# 304 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
uint32_t ble_advertising_restart_without_whitelist(ble_advertising_t * const p_advertising);
# 321 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
void ble_advertising_modes_config_set(ble_advertising_t * const p_advertising,
                                      ble_adv_modes_config_t const * const p_adv_modes_config);
# 342 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
ret_code_t ble_advertising_advdata_update(ble_advertising_t * const p_advertising,
                                          ble_advdata_t const * const p_advdata,
                                          ble_advdata_t const * const p_srdata);
# 21 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../components/ble/common/ble_conn_params.h" 1
# 53 "../../../../../../components/ble/common/ble_conn_params.h"
# 1 "../../../../../../components/ble/common/ble_srv_common.h" 1
# 53 "../../../../../../components/ble/common/ble_srv_common.h"
# 1 "../../../../../../components/softdevice/s113/headers/ble_types.h" 1
# 54 "../../../../../../components/ble/common/ble_srv_common.h" 2



# 1 "../../../../../../components/softdevice/s113/headers/ble_gatt.h" 1
# 58 "../../../../../../components/ble/common/ble_srv_common.h" 2
# 210 "../../../../../../components/ble/common/ble_srv_common.h"
typedef void (*ble_srv_error_handler_t) (uint32_t nrf_error);
# 219 "../../../../../../components/ble/common/ble_srv_common.h"
typedef struct
{
    uint8_t report_id;
    uint8_t report_type;
} ble_srv_report_ref_t;





typedef struct
{
    uint16_t length;
    uint8_t * p_str;
} ble_srv_utf8_str_t;






typedef struct
{
    ble_gap_conn_sec_mode_t read_perm;
    ble_gap_conn_sec_mode_t write_perm;
} ble_srv_security_mode_t;





typedef struct
{
    ble_gap_conn_sec_mode_t cccd_write_perm;
    ble_gap_conn_sec_mode_t read_perm;
    ble_gap_conn_sec_mode_t write_perm;
} ble_srv_cccd_security_mode_t;
# 265 "../../../../../../components/ble/common/ble_srv_common.h"

# 265 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
_Bool 
# 265 "../../../../../../components/ble/common/ble_srv_common.h"
    ble_srv_is_notification_enabled(uint8_t const * p_encoded_data);
# 276 "../../../../../../components/ble/common/ble_srv_common.h"

# 276 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
_Bool 
# 276 "../../../../../../components/ble/common/ble_srv_common.h"
    ble_srv_is_indication_enabled(uint8_t const * p_encoded_data);
# 286 "../../../../../../components/ble/common/ble_srv_common.h"
uint8_t ble_srv_report_ref_encode(uint8_t * p_encoded_buffer,
                                  const ble_srv_report_ref_t * p_report_ref);






void ble_srv_ascii_to_utf8(ble_srv_utf8_str_t * p_utf8, char * p_ascii);





typedef enum
{
    SEC_NO_ACCESS = 0,
    SEC_OPEN = 1,
    SEC_JUST_WORKS = 2,
    SEC_MITM = 3,
    SEC_SIGNED = 4,
    SEC_SIGNED_MITM = 5
}security_req_t;





typedef struct
{
    uint16_t max_size;
    uint16_t size;
    uint8_t *p_char_user_desc;
    
# 319 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 319 "../../../../../../components/ble/common/ble_srv_common.h"
                          is_var_len;
    ble_gatt_char_props_t char_props;
    
# 321 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 321 "../../../../../../components/ble/common/ble_srv_common.h"
                          is_defered_read;
    
# 322 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 322 "../../../../../../components/ble/common/ble_srv_common.h"
                          is_defered_write;
    security_req_t read_access;
    security_req_t write_access;
    
# 325 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 325 "../../../../../../components/ble/common/ble_srv_common.h"
                          is_value_user;
}ble_add_char_user_desc_t;





typedef struct
{
    uint16_t uuid;
    uint8_t uuid_type;
    uint16_t max_len;
    uint16_t init_len;
    uint8_t * p_init_value;
    
# 339 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 339 "../../../../../../components/ble/common/ble_srv_common.h"
                               is_var_len;
    ble_gatt_char_props_t char_props;
    ble_gatt_char_ext_props_t char_ext_props;
    
# 342 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 342 "../../../../../../components/ble/common/ble_srv_common.h"
                               is_defered_read;
    
# 343 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 343 "../../../../../../components/ble/common/ble_srv_common.h"
                               is_defered_write;
    security_req_t read_access;
    security_req_t write_access;
    security_req_t cccd_write_access;
    
# 347 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 347 "../../../../../../components/ble/common/ble_srv_common.h"
                               is_value_user;
    ble_add_char_user_desc_t *p_user_descr;
    ble_gatts_char_pf_t *p_presentation_format;
} ble_add_char_params_t;





typedef struct
{
    uint16_t uuid;
    uint8_t uuid_type;
    
# 360 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 360 "../../../../../../components/ble/common/ble_srv_common.h"
                  is_defered_read;
    
# 361 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 361 "../../../../../../components/ble/common/ble_srv_common.h"
                  is_defered_write;
    
# 362 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 362 "../../../../../../components/ble/common/ble_srv_common.h"
                  is_var_len;
    security_req_t read_access;
    security_req_t write_access;
    
# 365 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 365 "../../../../../../components/ble/common/ble_srv_common.h"
                  is_value_user;
    uint16_t init_len;
    uint16_t init_offs;
    uint16_t max_len;
    uint8_t* p_value;
} ble_add_descr_params_t;
# 384 "../../../../../../components/ble/common/ble_srv_common.h"
uint32_t characteristic_add(uint16_t service_handle,
                            ble_add_char_params_t * p_char_props,
                            ble_gatts_char_handles_t * p_char_handle);
# 397 "../../../../../../components/ble/common/ble_srv_common.h"
uint32_t descriptor_add(uint16_t char_handle,
                        ble_add_descr_params_t * p_descr_props,
                        uint16_t * p_descr_handle);
# 54 "../../../../../../components/ble/common/ble_conn_params.h" 2







typedef enum
{
    BLE_CONN_PARAMS_EVT_FAILED,
    BLE_CONN_PARAMS_EVT_SUCCEEDED
} ble_conn_params_evt_type_t;


typedef struct
{
    ble_conn_params_evt_type_t evt_type;
    uint16_t conn_handle;
} ble_conn_params_evt_t;


typedef void (*ble_conn_params_evt_handler_t) (ble_conn_params_evt_t * p_evt);



typedef struct
{
    ble_gap_conn_params_t * p_conn_params;
    uint32_t first_conn_params_update_delay;
    uint32_t next_conn_params_update_delay;
    uint8_t max_conn_params_update_count;
    uint16_t start_on_notify_cccd_handle;
    
# 86 "../../../../../../components/ble/common/ble_conn_params.h" 3 4
   _Bool 
# 86 "../../../../../../components/ble/common/ble_conn_params.h"
                                 disconnect_on_fail;
    ble_conn_params_evt_handler_t evt_handler;
    ble_srv_error_handler_t error_handler;
} ble_conn_params_init_t;
# 106 "../../../../../../components/ble/common/ble_conn_params.h"
ret_code_t ble_conn_params_init(const ble_conn_params_init_t * p_init);
# 122 "../../../../../../components/ble/common/ble_conn_params.h"
ret_code_t ble_conn_params_stop(void);
# 147 "../../../../../../components/ble/common/ble_conn_params.h"
ret_code_t ble_conn_params_change_conn_params(uint16_t conn_handle,
                                              ble_gap_conn_params_t * p_new_params);
# 22 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../components/softdevice/common/nrf_sdh.h" 1
# 55 "../../../../../../components/softdevice/common/nrf_sdh.h"
# 1 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h" 1
# 45 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"
# 1 "../../../../../../components/libraries/experimental_section_vars/nrf_section.h" 1
# 46 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h" 2
# 61 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"
typedef struct
{
    void * p_start;
    void * p_end;
} nrf_section_t;



typedef struct
{

    nrf_section_t section;
# 82 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"
    size_t item_size;
} nrf_section_set_t;



typedef struct
{
    nrf_section_set_t const * p_set;
# 98 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"
    void * p_item;
} nrf_section_iter_t;
# 178 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"
void nrf_section_iter_init(nrf_section_iter_t * p_iter, nrf_section_set_t const * p_set);






void nrf_section_iter_next(nrf_section_iter_t * p_iter);
# 194 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"
static inline void * nrf_section_iter_get(nrf_section_iter_t const * p_iter)
{
    if (0) { if (p_iter) { } else { assert_nrf_callback((uint16_t)196, (uint8_t *)"../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"); } };
    return p_iter->p_item;
}
# 56 "../../../../../../components/softdevice/common/nrf_sdh.h" 2
# 90 "../../../../../../components/softdevice/common/nrf_sdh.h"
typedef enum
{
    NRF_SDH_EVT_ENABLE_REQUEST,
    NRF_SDH_EVT_DISABLE_REQUEST,
} nrf_sdh_req_evt_t;







typedef 
# 102 "../../../../../../components/softdevice/common/nrf_sdh.h" 3 4
       _Bool 
# 102 "../../../../../../components/softdevice/common/nrf_sdh.h"
            (*nrf_sdh_req_evt_handler_t)(nrf_sdh_req_evt_t request, void * p_context);


typedef struct
{
    nrf_sdh_req_evt_handler_t handler;
    void * p_context;
} const nrf_sdh_req_observer_t;
# 142 "../../../../../../components/softdevice/common/nrf_sdh.h"
typedef enum
{
    NRF_SDH_EVT_STATE_ENABLE_PREPARE,
    NRF_SDH_EVT_STATE_ENABLED,
    NRF_SDH_EVT_STATE_DISABLE_PREPARE,
    NRF_SDH_EVT_STATE_DISABLED,
} nrf_sdh_state_evt_t;


typedef void (*nrf_sdh_state_evt_handler_t)(nrf_sdh_state_evt_t state, void * p_context);


typedef struct
{
    nrf_sdh_state_evt_handler_t handler;
    void * p_context;
} const nrf_sdh_state_observer_t;
# 188 "../../../../../../components/softdevice/common/nrf_sdh.h"
typedef void (*nrf_sdh_stack_evt_handler_t)(void * p_evt);


typedef struct
{
    nrf_sdh_stack_evt_handler_t handler;
    void * p_context;
} const nrf_sdh_stack_observer_t;
# 231 "../../../../../../components/softdevice/common/nrf_sdh.h"
ret_code_t nrf_sdh_enable_request(void);
# 246 "../../../../../../components/softdevice/common/nrf_sdh.h"
ret_code_t nrf_sdh_disable_request(void);
# 258 "../../../../../../components/softdevice/common/nrf_sdh.h"
ret_code_t nrf_sdh_request_continue(void);








# 266 "../../../../../../components/softdevice/common/nrf_sdh.h" 3 4
_Bool 
# 266 "../../../../../../components/softdevice/common/nrf_sdh.h"
    nrf_sdh_is_enabled(void);







void nrf_sdh_suspend(void);



void nrf_sdh_resume(void);
# 287 "../../../../../../components/softdevice/common/nrf_sdh.h"

# 287 "../../../../../../components/softdevice/common/nrf_sdh.h" 3 4
_Bool 
# 287 "../../../../../../components/softdevice/common/nrf_sdh.h"
    nrf_sdh_is_suspended(void);
# 296 "../../../../../../components/softdevice/common/nrf_sdh.h"
void nrf_sdh_evts_poll(void);
# 23 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../components/softdevice/common/nrf_sdh_soc.h" 1
# 127 "../../../../../../components/softdevice/common/nrf_sdh_soc.h"
typedef void (*nrf_sdh_soc_evt_handler_t) (uint32_t evt_id, void * p_context);


typedef struct
{
    nrf_sdh_soc_evt_handler_t handler;
    void * p_context;
} const nrf_sdh_soc_evt_observer_t;
# 24 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../components/softdevice/common/nrf_sdh_ble.h" 1
# 134 "../../../../../../components/softdevice/common/nrf_sdh_ble.h"
typedef void (*nrf_sdh_ble_evt_handler_t)(ble_evt_t const * p_ble_evt, void * p_context);


typedef struct
{
    nrf_sdh_ble_evt_handler_t handler;
    void * p_context;
} const nrf_sdh_ble_evt_observer_t;
# 151 "../../../../../../components/softdevice/common/nrf_sdh_ble.h"
ret_code_t nrf_sdh_ble_app_ram_start_get(uint32_t * p_app_ram_start);
# 168 "../../../../../../components/softdevice/common/nrf_sdh_ble.h"
ret_code_t nrf_sdh_ble_default_cfg_set(uint8_t conn_cfg_tag, uint32_t * p_ram_start);






ret_code_t nrf_sdh_ble_enable(uint32_t * p_app_ram_start);
# 25 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h" 1
# 82 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
typedef enum
{
  NRF_BLE_GATT_EVT_ATT_MTU_UPDATED = 0xA77,
  NRF_BLE_GATT_EVT_DATA_LENGTH_UPDATED = 0xDA7A,
} nrf_ble_gatt_evt_id_t;


typedef struct
{
    nrf_ble_gatt_evt_id_t evt_id;
    uint16_t conn_handle;
    union
    {
        uint16_t att_mtu_effective;

        uint8_t data_length;

    } params;
} nrf_ble_gatt_evt_t;


typedef struct nrf_ble_gatt_s nrf_ble_gatt_t;





typedef void (*nrf_ble_gatt_evt_handler_t) (nrf_ble_gatt_t * p_gatt, nrf_ble_gatt_evt_t const * p_evt);


typedef struct
{
    uint16_t att_mtu_desired;
    uint16_t att_mtu_effective;
    
# 116 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h" 3 4
   _Bool 
# 116 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
            att_mtu_exchange_pending;
    
# 117 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h" 3 4
   _Bool 
# 117 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
            att_mtu_exchange_requested;

    uint8_t data_length_desired;
    uint8_t data_length_effective;

} nrf_ble_gatt_link_t;



struct nrf_ble_gatt_s
{
    uint16_t att_mtu_desired_periph;
    uint16_t att_mtu_desired_central;
    uint8_t data_length;
    nrf_ble_gatt_link_t links[(1 + 0)];
    nrf_ble_gatt_evt_handler_t evt_handler;
};
# 144 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
ret_code_t nrf_ble_gatt_init(nrf_ble_gatt_t * p_gatt, nrf_ble_gatt_evt_handler_t evt_handler);
# 158 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
ret_code_t nrf_ble_gatt_att_mtu_periph_set(nrf_ble_gatt_t * p_gatt, uint16_t desired_mtu);
# 172 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
ret_code_t nrf_ble_gatt_att_mtu_central_set(nrf_ble_gatt_t * p_gatt, uint16_t desired_mtu);
# 186 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
ret_code_t nrf_ble_gatt_data_length_set(nrf_ble_gatt_t * p_gatt,
                                        uint16_t conn_handle,
                                        uint8_t data_length);
# 209 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
ret_code_t nrf_ble_gatt_data_length_get(nrf_ble_gatt_t const * p_gatt,
                                        uint16_t conn_handle,
                                        uint8_t * p_data_length);
# 221 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
void nrf_ble_gatt_on_ble_evt(ble_evt_t const * p_ble_evt, void * p_context);
# 233 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
uint16_t nrf_ble_gatt_eff_mtu_get(nrf_ble_gatt_t const * p_gatt, uint16_t conn_handle);
# 26 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../components/ble/nrf_ble_qwr/nrf_ble_qwr.h" 1
# 65 "../../../../../../components/ble/nrf_ble_qwr/nrf_ble_qwr.h"
# 1 "../../../../../../components/ble/common/ble_srv_common.h" 1
# 66 "../../../../../../components/ble/nrf_ble_qwr/nrf_ble_qwr.h" 2
# 98 "../../../../../../components/ble/nrf_ble_qwr/nrf_ble_qwr.h"
typedef enum
{
    NRF_BLE_QWR_EVT_EXECUTE_WRITE,
    NRF_BLE_QWR_EVT_AUTH_REQUEST,
} nrf_ble_qwr_evt_type_t;


typedef struct
{
    nrf_ble_qwr_evt_type_t evt_type;
    uint16_t attr_handle;
} nrf_ble_qwr_evt_t;


struct nrf_ble_qwr_t;






typedef uint16_t (* nrf_ble_qwr_evt_handler_t) (struct nrf_ble_qwr_t * p_qwr,
                                                nrf_ble_qwr_evt_t * p_evt);



typedef struct nrf_ble_qwr_t
{
    uint8_t initialized;
    uint16_t conn_handle;
    ble_srv_error_handler_t error_handler;
    
# 129 "../../../../../../components/ble/nrf_ble_qwr/nrf_ble_qwr.h" 3 4
   _Bool 
# 129 "../../../../../../components/ble/nrf_ble_qwr/nrf_ble_qwr.h"
                             is_user_mem_reply_pending;
# 138 "../../../../../../components/ble/nrf_ble_qwr/nrf_ble_qwr.h"
} nrf_ble_qwr_t;




typedef struct
{
    ble_srv_error_handler_t error_handler;




} nrf_ble_qwr_init_t;
# 168 "../../../../../../components/ble/nrf_ble_qwr/nrf_ble_qwr.h"
ret_code_t nrf_ble_qwr_init(nrf_ble_qwr_t * p_qwr,
                            nrf_ble_qwr_init_t const * p_qwr_init);
# 186 "../../../../../../components/ble/nrf_ble_qwr/nrf_ble_qwr.h"
ret_code_t nrf_ble_qwr_conn_handle_assign(nrf_ble_qwr_t * p_qwr,
                                          uint16_t conn_handle);
# 197 "../../../../../../components/ble/nrf_ble_qwr/nrf_ble_qwr.h"
void nrf_ble_qwr_on_ble_evt(ble_evt_t const * p_ble_evt, void * p_context);
# 27 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../components/ble/ble_services/ble_nus/ble_nus.h" 1
# 72 "../../../../../../components/ble/ble_services/ble_nus/ble_nus.h"
# 1 "../../../../../../components/ble/ble_link_ctx_manager/ble_link_ctx_manager.h" 1
# 60 "../../../../../../components/ble/ble_link_ctx_manager/ble_link_ctx_manager.h"
# 1 "../../../../../../components/ble/common/ble_conn_state.h" 1
# 70 "../../../../../../components/ble/common/ble_conn_state.h"
# 1 "../../../../../../components/libraries/atomic/nrf_atomic.h" 1
# 59 "../../../../../../components/libraries/atomic/nrf_atomic.h"
typedef volatile uint32_t nrf_atomic_u32_t;




typedef volatile uint32_t nrf_atomic_flag_t;
# 80 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_store(nrf_atomic_u32_t * p_data, uint32_t value);
# 90 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_store(nrf_atomic_u32_t * p_data, uint32_t value);
# 100 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_or(nrf_atomic_u32_t * p_data, uint32_t value);
# 110 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_or(nrf_atomic_u32_t * p_data, uint32_t value);
# 120 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_and(nrf_atomic_u32_t * p_data, uint32_t value);
# 130 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_and(nrf_atomic_u32_t * p_data, uint32_t value);
# 140 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_xor(nrf_atomic_u32_t * p_data, uint32_t value);
# 150 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_xor(nrf_atomic_u32_t * p_data, uint32_t value);
# 160 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_add(nrf_atomic_u32_t * p_data, uint32_t value);
# 170 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_add(nrf_atomic_u32_t * p_data, uint32_t value);
# 180 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_sub(nrf_atomic_u32_t * p_data, uint32_t value);
# 190 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_sub(nrf_atomic_u32_t * p_data, uint32_t value);
# 206 "../../../../../../components/libraries/atomic/nrf_atomic.h"

# 206 "../../../../../../components/libraries/atomic/nrf_atomic.h" 3 4
_Bool 
# 206 "../../../../../../components/libraries/atomic/nrf_atomic.h"
    nrf_atomic_u32_cmp_exch(nrf_atomic_u32_t * p_data,
                             uint32_t * p_expected,
                             uint32_t desired);
# 218 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_sub_hs(nrf_atomic_u32_t * p_data, uint32_t value);
# 228 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_sub_hs(nrf_atomic_u32_t * p_data, uint32_t value);
# 239 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_flag_set_fetch(nrf_atomic_flag_t * p_data);
# 248 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_flag_set(nrf_atomic_flag_t * p_data);
# 257 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_flag_clear_fetch(nrf_atomic_flag_t * p_data);
# 266 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_flag_clear(nrf_atomic_flag_t * p_data);
# 71 "../../../../../../components/ble/common/ble_conn_state.h" 2







typedef enum
{
    BLE_CONN_STATUS_INVALID,
    BLE_CONN_STATUS_DISCONNECTED,
    BLE_CONN_STATUS_CONNECTED,
} ble_conn_state_status_t;







typedef struct
{
    uint32_t len;
    uint16_t conn_handles[(20)];
} ble_conn_state_conn_handle_list_t;





typedef enum
{
    BLE_CONN_STATE_USER_FLAG0 = 0,
    BLE_CONN_STATE_USER_FLAG1,
    BLE_CONN_STATE_USER_FLAG2,
    BLE_CONN_STATE_USER_FLAG3,
    BLE_CONN_STATE_USER_FLAG4,
    BLE_CONN_STATE_USER_FLAG5,
    BLE_CONN_STATE_USER_FLAG6,
    BLE_CONN_STATE_USER_FLAG7,
    BLE_CONN_STATE_USER_FLAG8,
    BLE_CONN_STATE_USER_FLAG9,
    BLE_CONN_STATE_USER_FLAG10,
    BLE_CONN_STATE_USER_FLAG11,
    BLE_CONN_STATE_USER_FLAG12,
    BLE_CONN_STATE_USER_FLAG13,
    BLE_CONN_STATE_USER_FLAG14,
    BLE_CONN_STATE_USER_FLAG15,
    BLE_CONN_STATE_USER_FLAG16,
    BLE_CONN_STATE_USER_FLAG17,
    BLE_CONN_STATE_USER_FLAG18,
    BLE_CONN_STATE_USER_FLAG19,
    BLE_CONN_STATE_USER_FLAG20,
    BLE_CONN_STATE_USER_FLAG21,
    BLE_CONN_STATE_USER_FLAG22,
    BLE_CONN_STATE_USER_FLAG23,
    BLE_CONN_STATE_USER_FLAG_INVALID,
} ble_conn_state_user_flag_id_t;
# 137 "../../../../../../components/ble/common/ble_conn_state.h"
typedef void (*ble_conn_state_user_function_t)(uint16_t conn_handle, void * p_context);
# 150 "../../../../../../components/ble/common/ble_conn_state.h"
void ble_conn_state_init(void);
# 164 "../../../../../../components/ble/common/ble_conn_state.h"

# 164 "../../../../../../components/ble/common/ble_conn_state.h" 3 4
_Bool 
# 164 "../../../../../../components/ble/common/ble_conn_state.h"
    ble_conn_state_valid(uint16_t conn_handle);
# 174 "../../../../../../components/ble/common/ble_conn_state.h"
uint8_t ble_conn_state_role(uint16_t conn_handle);
# 184 "../../../../../../components/ble/common/ble_conn_state.h"
ble_conn_state_status_t ble_conn_state_status(uint16_t conn_handle);
# 194 "../../../../../../components/ble/common/ble_conn_state.h"

# 194 "../../../../../../components/ble/common/ble_conn_state.h" 3 4
_Bool 
# 194 "../../../../../../components/ble/common/ble_conn_state.h"
    ble_conn_state_encrypted(uint16_t conn_handle);
# 206 "../../../../../../components/ble/common/ble_conn_state.h"

# 206 "../../../../../../components/ble/common/ble_conn_state.h" 3 4
_Bool 
# 206 "../../../../../../components/ble/common/ble_conn_state.h"
    ble_conn_state_mitm_protected(uint16_t conn_handle);
# 222 "../../../../../../components/ble/common/ble_conn_state.h"

# 222 "../../../../../../components/ble/common/ble_conn_state.h" 3 4
_Bool 
# 222 "../../../../../../components/ble/common/ble_conn_state.h"
    ble_conn_state_lesc(uint16_t conn_handle);






uint32_t ble_conn_state_conn_count(void);
# 238 "../../../../../../components/ble/common/ble_conn_state.h"
uint32_t ble_conn_state_central_conn_count(void);
# 247 "../../../../../../components/ble/common/ble_conn_state.h"
uint32_t ble_conn_state_peripheral_conn_count(void);
# 256 "../../../../../../components/ble/common/ble_conn_state.h"
ble_conn_state_conn_handle_list_t ble_conn_state_conn_handles(void);
# 267 "../../../../../../components/ble/common/ble_conn_state.h"
ble_conn_state_conn_handle_list_t ble_conn_state_central_handles(void);
# 278 "../../../../../../components/ble/common/ble_conn_state.h"
ble_conn_state_conn_handle_list_t ble_conn_state_periph_handles(void);
# 293 "../../../../../../components/ble/common/ble_conn_state.h"
uint16_t ble_conn_state_conn_idx(uint16_t conn_handle);
# 306 "../../../../../../components/ble/common/ble_conn_state.h"
ble_conn_state_user_flag_id_t ble_conn_state_user_flag_acquire(void);
# 316 "../../../../../../components/ble/common/ble_conn_state.h"

# 316 "../../../../../../components/ble/common/ble_conn_state.h" 3 4
_Bool 
# 316 "../../../../../../components/ble/common/ble_conn_state.h"
    ble_conn_state_user_flag_get(uint16_t conn_handle, ble_conn_state_user_flag_id_t flag_id);
# 325 "../../../../../../components/ble/common/ble_conn_state.h"
void ble_conn_state_user_flag_set(uint16_t conn_handle,
                                  ble_conn_state_user_flag_id_t flag_id,
                                  
# 327 "../../../../../../components/ble/common/ble_conn_state.h" 3 4
                                 _Bool 
# 327 "../../../../../../components/ble/common/ble_conn_state.h"
                                                               value);
# 337 "../../../../../../components/ble/common/ble_conn_state.h"
uint32_t ble_conn_state_for_each_connected(ble_conn_state_user_function_t user_function,
                                           void * p_context);
# 349 "../../../../../../components/ble/common/ble_conn_state.h"
uint32_t ble_conn_state_for_each_set_user_flag(ble_conn_state_user_flag_id_t flag_id,
                                               ble_conn_state_user_function_t user_function,
                                               void * p_context);
# 61 "../../../../../../components/ble/ble_link_ctx_manager/ble_link_ctx_manager.h" 2
# 84 "../../../../../../components/ble/ble_link_ctx_manager/ble_link_ctx_manager.h"
typedef struct
{
    void * const p_ctx_data_pool;
    uint8_t const max_links_cnt;
    uint16_t const link_ctx_size;
} blcm_link_ctx_storage_t;
# 116 "../../../../../../components/ble/ble_link_ctx_manager/ble_link_ctx_manager.h"
ret_code_t blcm_link_ctx_get(blcm_link_ctx_storage_t const * const p_link_ctx_storage,
                             uint16_t const conn_handle,
                             void ** const pp_ctx_data);
# 73 "../../../../../../components/ble/ble_services/ble_nus/ble_nus.h" 2
# 112 "../../../../../../components/ble/ble_services/ble_nus/ble_nus.h"
typedef enum
{
    BLE_NUS_EVT_RX_DATA,
    BLE_NUS_EVT_TX_RDY,
    BLE_NUS_EVT_COMM_STARTED,
    BLE_NUS_EVT_COMM_STOPPED,
} ble_nus_evt_type_t;



typedef struct ble_nus_s ble_nus_t;






typedef struct
{
    uint8_t const * p_data;
    uint16_t length;
} ble_nus_evt_rx_data_t;






typedef struct
{
    
# 142 "../../../../../../components/ble/ble_services/ble_nus/ble_nus.h" 3 4
   _Bool 
# 142 "../../../../../../components/ble/ble_services/ble_nus/ble_nus.h"
        is_notification_enabled;
} ble_nus_client_context_t;






typedef struct
{
    ble_nus_evt_type_t type;
    ble_nus_t * p_nus;
    uint16_t conn_handle;
    ble_nus_client_context_t * p_link_ctx;
    union
    {
        ble_nus_evt_rx_data_t rx_data;
    } params;
} ble_nus_evt_t;



typedef void (* ble_nus_data_handler_t) (ble_nus_evt_t * p_evt);
# 173 "../../../../../../components/ble/ble_services/ble_nus/ble_nus.h"
typedef struct
{
    ble_nus_data_handler_t data_handler;
} ble_nus_init_t;






struct ble_nus_s
{
    uint8_t uuid_type;
    uint16_t service_handle;
    ble_gatts_char_handles_t tx_handles;
    ble_gatts_char_handles_t rx_handles;
    blcm_link_ctx_storage_t * const p_link_ctx_storage;
    ble_nus_data_handler_t data_handler;
};
# 204 "../../../../../../components/ble/ble_services/ble_nus/ble_nus.h"
uint32_t ble_nus_init(ble_nus_t * p_nus, ble_nus_init_t const * p_nus_init);
# 217 "../../../../../../components/ble/ble_services/ble_nus/ble_nus.h"
void ble_nus_on_ble_evt(ble_evt_t const * p_ble_evt, void * p_context);
# 232 "../../../../../../components/ble/ble_services/ble_nus/ble_nus.h"
uint32_t ble_nus_data_send(ble_nus_t * p_nus,
                           uint8_t * p_data,
                           uint16_t * p_length,
                           uint16_t conn_handle);
# 28 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../components/libraries/uart/app_uart.h" 1
# 64 "../../../../../../components/libraries/uart/app_uart.h"
typedef enum
{
    APP_UART_FLOW_CONTROL_DISABLED,
    APP_UART_FLOW_CONTROL_ENABLED,
} app_uart_flow_control_t;



typedef struct
{
    uint32_t rx_pin_no;
    uint32_t tx_pin_no;
    uint32_t rts_pin_no;
    uint32_t cts_pin_no;
    app_uart_flow_control_t flow_control;
    
# 79 "../../../../../../components/libraries/uart/app_uart.h" 3 4
   _Bool 
# 79 "../../../../../../components/libraries/uart/app_uart.h"
                           use_parity;
    uint32_t baud_rate;
} app_uart_comm_params_t;



typedef struct
{
    uint8_t * rx_buf;
    uint32_t rx_buf_size;
    uint8_t * tx_buf;
    uint32_t tx_buf_size;
} app_uart_buffers_t;






typedef enum
{
    APP_UART_DATA_READY,
    APP_UART_FIFO_ERROR,
    APP_UART_COMMUNICATION_ERROR,
    APP_UART_TX_EMPTY,
    APP_UART_DATA,
} app_uart_evt_type_t;






typedef struct
{
    app_uart_evt_type_t evt_type;
    union
    {
        uint32_t error_communication;
        uint32_t error_code;
        uint8_t value;
    } data;
} app_uart_evt_t;
# 130 "../../../../../../components/libraries/uart/app_uart.h"
typedef void (* app_uart_event_handler_t) (app_uart_evt_t * p_app_uart_event);
# 207 "../../../../../../components/libraries/uart/app_uart.h"
uint32_t app_uart_init(const app_uart_comm_params_t * p_comm_params,
                       app_uart_buffers_t * p_buffers,
                       app_uart_event_handler_t error_handler,
                       app_irq_priority_t irq_priority);
# 223 "../../../../../../components/libraries/uart/app_uart.h"
uint32_t app_uart_get(uint8_t * p_byte);
# 237 "../../../../../../components/libraries/uart/app_uart.h"
uint32_t app_uart_put(uint8_t byte);






uint32_t app_uart_flush(void);







uint32_t app_uart_close(void);
# 29 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2

# 1 "../../../../../../components/libraries/pwr_mgmt/nrf_pwr_mgmt.h" 1
# 60 "../../../../../../components/libraries/pwr_mgmt/nrf_pwr_mgmt.h"
typedef enum
{
    NRF_PWR_MGMT_SHUTDOWN_GOTO_SYSOFF,


    NRF_PWR_MGMT_SHUTDOWN_STAY_IN_SYSOFF,





    NRF_PWR_MGMT_SHUTDOWN_GOTO_DFU,


    NRF_PWR_MGMT_SHUTDOWN_RESET,


    NRF_PWR_MGMT_SHUTDOWN_CONTINUE





} nrf_pwr_mgmt_shutdown_t;


typedef enum
{
    NRF_PWR_MGMT_EVT_PREPARE_WAKEUP = NRF_PWR_MGMT_SHUTDOWN_GOTO_SYSOFF,


    NRF_PWR_MGMT_EVT_PREPARE_SYSOFF = NRF_PWR_MGMT_SHUTDOWN_STAY_IN_SYSOFF,


    NRF_PWR_MGMT_EVT_PREPARE_DFU = NRF_PWR_MGMT_SHUTDOWN_GOTO_DFU,


    NRF_PWR_MGMT_EVT_PREPARE_RESET = NRF_PWR_MGMT_SHUTDOWN_RESET,

} nrf_pwr_mgmt_evt_t;
# 108 "../../../../../../components/libraries/pwr_mgmt/nrf_pwr_mgmt.h"
typedef 
# 108 "../../../../../../components/libraries/pwr_mgmt/nrf_pwr_mgmt.h" 3 4
       _Bool 
# 108 "../../../../../../components/libraries/pwr_mgmt/nrf_pwr_mgmt.h"
            (*nrf_pwr_mgmt_shutdown_handler_t)(nrf_pwr_mgmt_evt_t event);
# 131 "../../../../../../components/libraries/pwr_mgmt/nrf_pwr_mgmt.h"
ret_code_t nrf_pwr_mgmt_init(void);



void nrf_pwr_mgmt_run(void);







void nrf_pwr_mgmt_feed(void);







void nrf_pwr_mgmt_shutdown(nrf_pwr_mgmt_shutdown_t shutdown_type);
# 31 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2

# 1 "../../../../../../components/libraries/log/nrf_log.h" 1
# 53 "../../../../../../components/libraries/log/nrf_log.h"
# 1 "../../../../../../components/libraries/experimental_section_vars/nrf_section.h" 1
# 54 "../../../../../../components/libraries/log/nrf_log.h" 2
# 81 "../../../../../../components/libraries/log/nrf_log.h"
# 1 "../../../../../../components/libraries/log/src/nrf_log_internal.h" 1
# 48 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
# 1 "../../../../../../components/libraries/log/nrf_log_instance.h" 1
# 45 "../../../../../../components/libraries/log/nrf_log_instance.h"
# 1 "../../../../../../components/libraries/log/nrf_log_types.h" 1
# 48 "../../../../../../components/libraries/log/nrf_log_types.h"
typedef enum
{
    NRF_LOG_SEVERITY_NONE,
    NRF_LOG_SEVERITY_ERROR,
    NRF_LOG_SEVERITY_WARNING,
    NRF_LOG_SEVERITY_INFO,
    NRF_LOG_SEVERITY_DEBUG,
    NRF_LOG_SEVERITY_INFO_RAW,
} nrf_log_severity_t;






typedef struct
{
    uint16_t order_idx;
    uint16_t filter;
} nrf_log_module_dynamic_data_t;






typedef struct
{
    uint32_t filter_lvls;
} nrf_log_module_filter_data_t;






typedef struct
{
    const char * p_module_name;
    uint8_t info_color_id;
    uint8_t debug_color_id;
    nrf_log_severity_t compiled_lvl;
    nrf_log_severity_t initial_lvl;
} nrf_log_module_const_data_t;
# 46 "../../../../../../components/libraries/log/nrf_log_instance.h" 2
# 76 "../../../../../../components/libraries/log/nrf_log_instance.h"
extern nrf_log_module_dynamic_data_t * __start_log_dynamic_data; extern void * __stop_log_dynamic_data;
extern nrf_log_module_filter_data_t * __start_log_filter_data; extern void * __stop_log_filter_data;
extern nrf_log_module_const_data_t * __start_log_const_data; extern void * __stop_log_const_data;
# 49 "../../../../../../components/libraries/log/src/nrf_log_internal.h" 2
# 1 "../../../../../../components/libraries/log/nrf_log_types.h" 1
# 50 "../../../../../../components/libraries/log/src/nrf_log_internal.h" 2
# 310 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
extern nrf_log_module_dynamic_data_t m_nrf_log_app_logs_data_dynamic;
extern const nrf_log_module_const_data_t m_nrf_log_app_logs_data_const;
# 363 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
typedef struct
{
    uint32_t type : 2;
    uint32_t in_progress: 1;
    uint32_t data : 29;
} nrf_log_generic_header_t;

typedef struct
{
    uint32_t type : 2;
    uint32_t in_progress: 1;
    uint32_t severity : 3;
    uint32_t nargs : 4;
    uint32_t addr : 22;
} nrf_log_std_header_t;

typedef struct
{
    uint32_t type : 2;
    uint32_t in_progress: 1;
    uint32_t severity : 3;
    uint32_t offset : 10;
    uint32_t reserved : 6;
    uint32_t len : 10;
} nrf_log_hexdump_header_t;

typedef union
{
    nrf_log_generic_header_t generic;
    nrf_log_std_header_t std;
    nrf_log_hexdump_header_t hexdump;
    uint32_t raw;
} nrf_log_main_header_t;

typedef struct
{
    nrf_log_main_header_t base;
    uint16_t module_id;
    uint16_t dropped;
    uint32_t timestamp;
} nrf_log_header_t;
# 414 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_0(uint32_t severity_mid, char const * const p_str);
# 423 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_1(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0);
# 434 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_2(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1);
# 446 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_3(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1,
                            uint32_t val2);
# 459 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_4(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1,
                            uint32_t val2,
                            uint32_t val3);
# 473 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_5(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1,
                            uint32_t val2,
                            uint32_t val3,
                            uint32_t val4);
# 488 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_6(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1,
                            uint32_t val2,
                            uint32_t val3,
                            uint32_t val4,
                            uint32_t val5);
# 506 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_hexdump(uint32_t severity_mid,
                              const void * const p_data,
                              uint16_t length);






uint8_t nrf_log_getchar(void);
# 82 "../../../../../../components/libraries/log/nrf_log.h" 2
# 262 "../../../../../../components/libraries/log/nrf_log.h"
char const * nrf_log_push(char * const p_str);
# 33 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 1
# 58 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
# 1 "../../../../../../components/libraries/log/src/nrf_log_ctrl_internal.h" 1
# 59 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 2
# 1 "../../../../../../components/libraries/log/nrf_log_backend_interface.h" 1
# 71 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
typedef void nrf_log_entry_t;



typedef struct nrf_log_backend_s nrf_log_backend_t;




typedef struct
{



    void (*put)(nrf_log_backend_t const * p_backend, nrf_log_entry_t * p_entry);




    void (*panic_set)(nrf_log_backend_t const * p_backend);




    void (*flush)(nrf_log_backend_t const * p_backend);
} nrf_log_backend_api_t;




typedef struct
{
    nrf_log_backend_t const * p_next;
    uint8_t id;
    
# 105 "../../../../../../components/libraries/log/nrf_log_backend_interface.h" 3 4
   _Bool 
# 105 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
                             enabled;
} nrf_log_backend_cb_t;




struct nrf_log_backend_s
{
    nrf_log_backend_api_t const * p_api;
    void * p_ctx;
    char * p_name;
    nrf_log_backend_cb_t * p_cb;
};
# 128 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
extern nrf_log_backend_t * __start_log_backends; extern void * __stop_log_backends;
# 158 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
static inline void nrf_log_backend_put(nrf_log_backend_t const * const p_backend,
                                         nrf_log_entry_t * p_msg);






static inline void nrf_log_backend_panic_set(nrf_log_backend_t const * const p_backend);
# 175 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
static inline void nrf_log_backend_flush(nrf_log_backend_t const * const p_backend);
# 186 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
static inline void nrf_log_backend_id_set(nrf_log_backend_t const * const p_backend, uint8_t id);
# 196 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
static inline uint8_t nrf_log_backend_id_get(nrf_log_backend_t const * const p_backend);






static inline void nrf_log_backend_enable(nrf_log_backend_t const * const p_backend);






static inline void nrf_log_backend_disable(nrf_log_backend_t const * const p_backend);
# 219 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
static inline 
# 219 "../../../../../../components/libraries/log/nrf_log_backend_interface.h" 3 4
               _Bool 
# 219 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
                    nrf_log_backend_is_enabled(nrf_log_backend_t const * const p_backend);


static inline void nrf_log_backend_put(nrf_log_backend_t const * const p_backend,
                                         nrf_log_entry_t * p_msg)
{
    p_backend->p_api->put(p_backend, p_msg);
}

static inline void nrf_log_backend_panic_set(nrf_log_backend_t const * const p_backend)
{
    p_backend->p_api->panic_set(p_backend);
}

static inline void nrf_log_backend_flush(nrf_log_backend_t const * const p_backend)
{
    p_backend->p_api->flush(p_backend);
}

static inline void nrf_log_backend_id_set(nrf_log_backend_t const * const p_backend, uint8_t id)
{
    p_backend->p_cb->id = id;
}

static inline uint8_t nrf_log_backend_id_get(nrf_log_backend_t const * const p_backend)
{
    return p_backend->p_cb->id;
}

static inline void nrf_log_backend_enable(nrf_log_backend_t const * const p_backend)
{
    p_backend->p_cb->enabled = 
# 250 "../../../../../../components/libraries/log/nrf_log_backend_interface.h" 3 4
                              1
# 250 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
                                  ;
}

static inline void nrf_log_backend_disable(nrf_log_backend_t const * const p_backend)
{
    p_backend->p_cb->enabled = 
# 255 "../../../../../../components/libraries/log/nrf_log_backend_interface.h" 3 4
                              0
# 255 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
                                   ;
}

static inline 
# 258 "../../../../../../components/libraries/log/nrf_log_backend_interface.h" 3 4
               _Bool 
# 258 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
                    nrf_log_backend_is_enabled(nrf_log_backend_t const * const p_backend)
{
    return p_backend->p_cb->enabled;
}
# 60 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 2
# 69 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
typedef uint32_t (*nrf_log_timestamp_func_t)(void);
# 124 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
ret_code_t nrf_log_init(nrf_log_timestamp_func_t timestamp_func, uint32_t timestamp_freq);
# 134 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
int32_t nrf_log_backend_add(nrf_log_backend_t const * p_backend, nrf_log_severity_t severity);







void nrf_log_backend_remove(nrf_log_backend_t const * p_backend);







void nrf_log_panic(void);
# 161 "../../../../../../components/libraries/log/nrf_log_ctrl.h"

# 161 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 3 4
_Bool 
# 161 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
    nrf_log_frontend_dequeue(void);






uint32_t nrf_log_module_cnt_get(void);
# 177 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
const char * nrf_log_module_name_get(uint32_t module_id, 
# 177 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 3 4
                                                        _Bool 
# 177 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
                                                             is_ordered_idx);
# 187 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
uint8_t nrf_log_color_id_get(uint32_t module_id, nrf_log_severity_t severity);
# 198 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
void nrf_log_module_filter_set(uint32_t backend_id,
                               uint32_t module_id,
                               nrf_log_severity_t severity);
# 214 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
nrf_log_severity_t nrf_log_module_filter_get(uint32_t backend_id,
                                             uint32_t module_id,
                                             
# 216 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 3 4
                                            _Bool 
# 216 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
                                                     is_ordered_idx,
                                             
# 217 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 3 4
                                            _Bool 
# 217 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
                                                     dynamic);






ret_code_t nrf_log_config_store(void);
# 233 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
ret_code_t nrf_log_config_load(void);
# 34 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 1 "../../../../../../components/libraries/log/nrf_log_default_backends.h" 1
# 73 "../../../../../../components/libraries/log/nrf_log_default_backends.h"
void nrf_log_default_backends_init(void);
# 35 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2


# 1 "../../../../../../modules/nrfx/hal/nrf_uart.h" 1
# 61 "../../../../../../modules/nrfx/hal/nrf_uart.h"
typedef enum
{
    NRF_UART_TASK_STARTRX = __builtin_offsetof (NRF_UART_Type, TASKS_STARTRX),
    NRF_UART_TASK_STOPRX = __builtin_offsetof (NRF_UART_Type, TASKS_STOPRX),
    NRF_UART_TASK_STARTTX = __builtin_offsetof (NRF_UART_Type, TASKS_STARTTX),
    NRF_UART_TASK_STOPTX = __builtin_offsetof (NRF_UART_Type, TASKS_STOPTX),
    NRF_UART_TASK_SUSPEND = __builtin_offsetof (NRF_UART_Type, TASKS_SUSPEND),
} nrf_uart_task_t;


typedef enum
{
    NRF_UART_EVENT_CTS = __builtin_offsetof (NRF_UART_Type, EVENTS_CTS),
    NRF_UART_EVENT_NCTS = __builtin_offsetof (NRF_UART_Type, EVENTS_NCTS),
    NRF_UART_EVENT_RXDRDY = __builtin_offsetof (NRF_UART_Type, EVENTS_RXDRDY),
    NRF_UART_EVENT_TXDRDY = __builtin_offsetof (NRF_UART_Type, EVENTS_TXDRDY),
    NRF_UART_EVENT_ERROR = __builtin_offsetof (NRF_UART_Type, EVENTS_ERROR),
    NRF_UART_EVENT_RXTO = __builtin_offsetof (NRF_UART_Type, EVENTS_RXTO)
} nrf_uart_event_t;


typedef enum
{
    NRF_UART_INT_MASK_CTS = (0x1UL << (0UL)),
    NRF_UART_INT_MASK_NCTS = (0x1UL << (1UL)),
    NRF_UART_INT_MASK_RXDRDY = (0x1UL << (2UL)),
    NRF_UART_INT_MASK_TXDRDY = (0x1UL << (7UL)),
    NRF_UART_INT_MASK_ERROR = (0x1UL << (9UL)),
    NRF_UART_INT_MASK_RXTO = (0x1UL << (17UL))
} nrf_uart_int_mask_t;


typedef enum
{
    NRF_UART_BAUDRATE_1200 = (0x0004F000UL),
    NRF_UART_BAUDRATE_2400 = (0x0009D000UL),
    NRF_UART_BAUDRATE_4800 = (0x0013B000UL),
    NRF_UART_BAUDRATE_9600 = (0x00275000UL),
    NRF_UART_BAUDRATE_14400 = (0x003B0000UL),
    NRF_UART_BAUDRATE_19200 = (0x004EA000UL),
    NRF_UART_BAUDRATE_28800 = (0x0075F000UL),
    NRF_UART_BAUDRATE_31250 = (0x00800000UL),
    NRF_UART_BAUDRATE_38400 = (0x009D5000UL),
    NRF_UART_BAUDRATE_56000 = (0x00E50000UL),
    NRF_UART_BAUDRATE_57600 = (0x00EBF000UL),
    NRF_UART_BAUDRATE_76800 = (0x013A9000UL),
    NRF_UART_BAUDRATE_115200 = (0x01D7E000UL),
    NRF_UART_BAUDRATE_230400 = (0x03AFB000UL),
    NRF_UART_BAUDRATE_250000 = (0x04000000UL),
    NRF_UART_BAUDRATE_460800 = (0x075F7000UL),
    NRF_UART_BAUDRATE_921600 = (0x0EBED000UL),
    NRF_UART_BAUDRATE_1000000 = (0x10000000UL),
} nrf_uart_baudrate_t;


typedef enum
{
    NRF_UART_ERROR_OVERRUN_MASK = (0x1UL << (0UL)),
    NRF_UART_ERROR_PARITY_MASK = (0x1UL << (1UL)),
    NRF_UART_ERROR_FRAMING_MASK = (0x1UL << (2UL)),
    NRF_UART_ERROR_BREAK_MASK = (0x1UL << (3UL)),
} nrf_uart_error_mask_t;


typedef enum
{
    NRF_UART_PARITY_EXCLUDED = (0x0UL) << (1UL),
    NRF_UART_PARITY_INCLUDED = (0x7UL) << (1UL),
} nrf_uart_parity_t;


typedef enum
{
    NRF_UART_HWFC_DISABLED = (0UL),
    NRF_UART_HWFC_ENABLED = (1UL),
} nrf_uart_hwfc_t;







static inline void nrf_uart_event_clear(NRF_UART_Type * p_reg, nrf_uart_event_t event);
# 155 "../../../../../../modules/nrfx/hal/nrf_uart.h"
static inline 
# 155 "../../../../../../modules/nrfx/hal/nrf_uart.h" 3 4
               _Bool 
# 155 "../../../../../../modules/nrfx/hal/nrf_uart.h"
                    nrf_uart_event_check(NRF_UART_Type * p_reg, nrf_uart_event_t event);
# 165 "../../../../../../modules/nrfx/hal/nrf_uart.h"
static inline uint32_t nrf_uart_event_address_get(NRF_UART_Type * p_reg,
                                                    nrf_uart_event_t event);







static inline void nrf_uart_int_enable(NRF_UART_Type * p_reg, uint32_t mask);
# 185 "../../../../../../modules/nrfx/hal/nrf_uart.h"
static inline 
# 185 "../../../../../../modules/nrfx/hal/nrf_uart.h" 3 4
               _Bool 
# 185 "../../../../../../modules/nrfx/hal/nrf_uart.h"
                    nrf_uart_int_enable_check(NRF_UART_Type * p_reg, uint32_t mask);







static inline void nrf_uart_int_disable(NRF_UART_Type * p_reg, uint32_t mask);
# 202 "../../../../../../modules/nrfx/hal/nrf_uart.h"
static inline uint32_t nrf_uart_errorsrc_get_and_clear(NRF_UART_Type * p_reg);






static inline void nrf_uart_enable(NRF_UART_Type * p_reg);






static inline void nrf_uart_disable(NRF_UART_Type * p_reg);
# 225 "../../../../../../modules/nrfx/hal/nrf_uart.h"
static inline void nrf_uart_txrx_pins_set(NRF_UART_Type * p_reg, uint32_t pseltxd, uint32_t pselrxd);






static inline void nrf_uart_txrx_pins_disconnect(NRF_UART_Type * p_reg);
# 241 "../../../../../../modules/nrfx/hal/nrf_uart.h"
static inline uint32_t nrf_uart_tx_pin_get(NRF_UART_Type * p_reg);
# 250 "../../../../../../modules/nrfx/hal/nrf_uart.h"
static inline uint32_t nrf_uart_rx_pin_get(NRF_UART_Type * p_reg);
# 259 "../../../../../../modules/nrfx/hal/nrf_uart.h"
static inline uint32_t nrf_uart_rts_pin_get(NRF_UART_Type * p_reg);
# 268 "../../../../../../modules/nrfx/hal/nrf_uart.h"
static inline uint32_t nrf_uart_cts_pin_get(NRF_UART_Type * p_reg);
# 277 "../../../../../../modules/nrfx/hal/nrf_uart.h"
static inline void nrf_uart_hwfc_pins_set(NRF_UART_Type * p_reg,
                                            uint32_t pselrts,
                                            uint32_t pselcts);






static inline void nrf_uart_hwfc_pins_disconnect(NRF_UART_Type * p_reg);
# 295 "../../../../../../modules/nrfx/hal/nrf_uart.h"
static inline uint8_t nrf_uart_rxd_get(NRF_UART_Type * p_reg);







static inline void nrf_uart_txd_set(NRF_UART_Type * p_reg, uint8_t txd);







static inline void nrf_uart_task_trigger(NRF_UART_Type * p_reg, nrf_uart_task_t task);
# 321 "../../../../../../modules/nrfx/hal/nrf_uart.h"
static inline uint32_t nrf_uart_task_address_get(NRF_UART_Type * p_reg, nrf_uart_task_t task);
# 330 "../../../../../../modules/nrfx/hal/nrf_uart.h"
static inline void nrf_uart_configure(NRF_UART_Type * p_reg,
                                        nrf_uart_parity_t parity,
                                        nrf_uart_hwfc_t hwfc);







static inline void nrf_uart_baudrate_set(NRF_UART_Type * p_reg, nrf_uart_baudrate_t baudrate);




static inline void nrf_uart_event_clear(NRF_UART_Type * p_reg, nrf_uart_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;

    volatile uint32_t dummy = *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event));
    (void)dummy;

}

static inline 
# 354 "../../../../../../modules/nrfx/hal/nrf_uart.h" 3 4
               _Bool 
# 354 "../../../../../../modules/nrfx/hal/nrf_uart.h"
                    nrf_uart_event_check(NRF_UART_Type * p_reg, nrf_uart_event_t event)
{
    return (
# 356 "../../../../../../modules/nrfx/hal/nrf_uart.h" 3 4
           _Bool
# 356 "../../../../../../modules/nrfx/hal/nrf_uart.h"
               )*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

static inline uint32_t nrf_uart_event_address_get(NRF_UART_Type * p_reg,
                                                    nrf_uart_event_t event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

static inline void nrf_uart_int_enable(NRF_UART_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

static inline 
# 370 "../../../../../../modules/nrfx/hal/nrf_uart.h" 3 4
               _Bool 
# 370 "../../../../../../modules/nrfx/hal/nrf_uart.h"
                    nrf_uart_int_enable_check(NRF_UART_Type * p_reg, uint32_t mask)
{
    return (
# 372 "../../../../../../modules/nrfx/hal/nrf_uart.h" 3 4
           _Bool
# 372 "../../../../../../modules/nrfx/hal/nrf_uart.h"
               )(p_reg->INTENSET & mask);
}

static inline void nrf_uart_int_disable(NRF_UART_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

static inline uint32_t nrf_uart_errorsrc_get_and_clear(NRF_UART_Type * p_reg)
{
    uint32_t errsrc_mask = p_reg->ERRORSRC;
    p_reg->ERRORSRC = errsrc_mask;
    return errsrc_mask;
}

static inline void nrf_uart_enable(NRF_UART_Type * p_reg)
{
    p_reg->ENABLE = (4UL);
}

static inline void nrf_uart_disable(NRF_UART_Type * p_reg)
{
    p_reg->ENABLE = (0UL);
}

static inline void nrf_uart_txrx_pins_set(NRF_UART_Type * p_reg, uint32_t pseltxd, uint32_t pselrxd)
{

    p_reg->PSEL.RXD = pselrxd;




    p_reg->PSEL.TXD = pseltxd;



}

static inline void nrf_uart_txrx_pins_disconnect(NRF_UART_Type * p_reg)
{
    nrf_uart_txrx_pins_set(p_reg, 0xFFFFFFFF, 0xFFFFFFFF);
}

static inline uint32_t nrf_uart_tx_pin_get(NRF_UART_Type * p_reg)
{

    return p_reg->PSEL.TXD;



}

static inline uint32_t nrf_uart_rx_pin_get(NRF_UART_Type * p_reg)
{

    return p_reg->PSEL.RXD;



}

static inline uint32_t nrf_uart_rts_pin_get(NRF_UART_Type * p_reg)
{

    return p_reg->PSEL.RTS;



}

static inline uint32_t nrf_uart_cts_pin_get(NRF_UART_Type * p_reg)
{

    return p_reg->PSEL.CTS;



}

static inline void nrf_uart_hwfc_pins_set(NRF_UART_Type * p_reg, uint32_t pselrts, uint32_t pselcts)
{

    p_reg->PSEL.RTS = pselrts;





    p_reg->PSEL.CTS = pselcts;



}

static inline void nrf_uart_hwfc_pins_disconnect(NRF_UART_Type * p_reg)
{
    nrf_uart_hwfc_pins_set(p_reg, 0xFFFFFFFF, 0xFFFFFFFF);
}

static inline uint8_t nrf_uart_rxd_get(NRF_UART_Type * p_reg)
{
    return p_reg->RXD;
}

static inline void nrf_uart_txd_set(NRF_UART_Type * p_reg, uint8_t txd)
{
    p_reg->TXD = txd;
}

static inline void nrf_uart_task_trigger(NRF_UART_Type * p_reg, nrf_uart_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

static inline uint32_t nrf_uart_task_address_get(NRF_UART_Type * p_reg, nrf_uart_task_t task)
{
    return (uint32_t)p_reg + (uint32_t)task;
}

static inline void nrf_uart_configure(NRF_UART_Type * p_reg,
                                            nrf_uart_parity_t parity,
                                            nrf_uart_hwfc_t hwfc)
{
    p_reg->CONFIG = (uint32_t)parity | (uint32_t)hwfc;
}

static inline void nrf_uart_baudrate_set(NRF_UART_Type * p_reg, nrf_uart_baudrate_t baudrate)
{
    p_reg->BAUDRATE = baudrate;
}
# 38 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2


# 1 "../../../../../../modules/nrfx/hal/nrf_uarte.h" 1
# 60 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
typedef enum
{
    NRF_UARTE_TASK_STARTRX = __builtin_offsetof (NRF_UARTE_Type, TASKS_STARTRX),
    NRF_UARTE_TASK_STOPRX = __builtin_offsetof (NRF_UARTE_Type, TASKS_STOPRX),
    NRF_UARTE_TASK_STARTTX = __builtin_offsetof (NRF_UARTE_Type, TASKS_STARTTX),
    NRF_UARTE_TASK_STOPTX = __builtin_offsetof (NRF_UARTE_Type, TASKS_STOPTX),
    NRF_UARTE_TASK_FLUSHRX = __builtin_offsetof (NRF_UARTE_Type, TASKS_FLUSHRX)
} nrf_uarte_task_t;


typedef enum
{
    NRF_UARTE_EVENT_CTS = __builtin_offsetof (NRF_UARTE_Type, EVENTS_CTS),
    NRF_UARTE_EVENT_NCTS = __builtin_offsetof (NRF_UARTE_Type, EVENTS_NCTS),
    NRF_UARTE_EVENT_RXDRDY = __builtin_offsetof (NRF_UARTE_Type, EVENTS_RXDRDY),
    NRF_UARTE_EVENT_ENDRX = __builtin_offsetof (NRF_UARTE_Type, EVENTS_ENDRX),
    NRF_UARTE_EVENT_TXDRDY = __builtin_offsetof (NRF_UARTE_Type, EVENTS_TXDRDY),
    NRF_UARTE_EVENT_ENDTX = __builtin_offsetof (NRF_UARTE_Type, EVENTS_ENDTX),
    NRF_UARTE_EVENT_ERROR = __builtin_offsetof (NRF_UARTE_Type, EVENTS_ERROR),
    NRF_UARTE_EVENT_RXTO = __builtin_offsetof (NRF_UARTE_Type, EVENTS_RXTO),
    NRF_UARTE_EVENT_RXSTARTED = __builtin_offsetof (NRF_UARTE_Type, EVENTS_RXSTARTED),
    NRF_UARTE_EVENT_TXSTARTED = __builtin_offsetof (NRF_UARTE_Type, EVENTS_TXSTARTED),
    NRF_UARTE_EVENT_TXSTOPPED = __builtin_offsetof (NRF_UARTE_Type, EVENTS_TXSTOPPED)
} nrf_uarte_event_t;


typedef enum
{
    NRF_UARTE_SHORT_ENDRX_STARTRX = (0x1UL << (5UL)),
    NRF_UARTE_SHORT_ENDRX_STOPRX = (0x1UL << (6UL))
} nrf_uarte_short_t;



typedef enum
{
    NRF_UARTE_INT_CTS_MASK = (0x1UL << (0UL)),
    NRF_UARTE_INT_NCTS_MASK = (0x1UL << (1UL)),
    NRF_UARTE_INT_RXDRDY_MASK = (0x1UL << (2UL)),
    NRF_UARTE_INT_ENDRX_MASK = (0x1UL << (4UL)),
    NRF_UARTE_INT_TXDRDY_MASK = (0x1UL << (7UL)),
    NRF_UARTE_INT_ENDTX_MASK = (0x1UL << (8UL)),
    NRF_UARTE_INT_ERROR_MASK = (0x1UL << (9UL)),
    NRF_UARTE_INT_RXTO_MASK = (0x1UL << (17UL)),
    NRF_UARTE_INT_RXSTARTED_MASK = (0x1UL << (19UL)),
    NRF_UARTE_INT_TXSTARTED_MASK = (0x1UL << (20UL)),
    NRF_UARTE_INT_TXSTOPPED_MASK = (0x1UL << (22UL))
} nrf_uarte_int_mask_t;


typedef enum
{
    NRF_UARTE_BAUDRATE_1200 = (0x0004F000UL),
    NRF_UARTE_BAUDRATE_2400 = (0x0009D000UL),
    NRF_UARTE_BAUDRATE_4800 = (0x0013B000UL),
    NRF_UARTE_BAUDRATE_9600 = (0x00275000UL),
    NRF_UARTE_BAUDRATE_14400 = (0x003AF000UL),
    NRF_UARTE_BAUDRATE_19200 = (0x004EA000UL),
    NRF_UARTE_BAUDRATE_28800 = (0x0075C000UL),
    NRF_UARTE_BAUDRATE_31250 = (0x00800000UL),
    NRF_UARTE_BAUDRATE_38400 = (0x009D0000UL),
    NRF_UARTE_BAUDRATE_56000 = (0x00E50000UL),
    NRF_UARTE_BAUDRATE_57600 = (0x00EB0000UL),
    NRF_UARTE_BAUDRATE_76800 = (0x013A9000UL),
    NRF_UARTE_BAUDRATE_115200 = (0x01D60000UL),
    NRF_UARTE_BAUDRATE_230400 = (0x03B00000UL),
    NRF_UARTE_BAUDRATE_250000 = (0x04000000UL),
    NRF_UARTE_BAUDRATE_460800 = (0x07400000UL),
    NRF_UARTE_BAUDRATE_921600 = (0x0F000000UL),
    NRF_UARTE_BAUDRATE_1000000 = (0x10000000UL)
} nrf_uarte_baudrate_t;


typedef enum
{
    NRF_UARTE_ERROR_OVERRUN_MASK = (0x1UL << (0UL)),
    NRF_UARTE_ERROR_PARITY_MASK = (0x1UL << (1UL)),
    NRF_UARTE_ERROR_FRAMING_MASK = (0x1UL << (2UL)),
    NRF_UARTE_ERROR_BREAK_MASK = (0x1UL << (3UL))
} nrf_uarte_error_mask_t;


typedef enum
{
    NRF_UARTE_PARITY_EXCLUDED = (0x0UL) << (1UL),
    NRF_UARTE_PARITY_INCLUDED = (0x7UL) << (1UL)
} nrf_uarte_parity_t;


typedef enum
{
    NRF_UARTE_HWFC_DISABLED = (0UL) << (0UL),
    NRF_UARTE_HWFC_ENABLED = (1UL) << (0UL)
} nrf_uarte_hwfc_t;
# 162 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline void nrf_uarte_event_clear(NRF_UARTE_Type * p_reg, nrf_uarte_event_t event);
# 173 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline 
# 173 "../../../../../../modules/nrfx/hal/nrf_uarte.h" 3 4
               _Bool 
# 173 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
                    nrf_uarte_event_check(NRF_UARTE_Type * p_reg, nrf_uarte_event_t event);
# 183 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline uint32_t nrf_uarte_event_address_get(NRF_UARTE_Type * p_reg,
                                                     nrf_uarte_event_t event);







static inline void nrf_uarte_shorts_enable(NRF_UARTE_Type * p_reg, uint32_t mask);







static inline void nrf_uarte_shorts_disable(NRF_UARTE_Type * p_reg, uint32_t mask);







static inline void nrf_uarte_int_enable(NRF_UARTE_Type * p_reg, uint32_t mask);
# 219 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline 
# 219 "../../../../../../modules/nrfx/hal/nrf_uarte.h" 3 4
               _Bool 
# 219 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
                    nrf_uarte_int_enable_check(NRF_UARTE_Type * p_reg, nrf_uarte_int_mask_t mask);







static inline void nrf_uarte_int_disable(NRF_UARTE_Type * p_reg, uint32_t mask);
# 282 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline uint32_t nrf_uarte_errorsrc_get_and_clear(NRF_UARTE_Type * p_reg);






static inline void nrf_uarte_enable(NRF_UARTE_Type * p_reg);






static inline void nrf_uarte_disable(NRF_UARTE_Type * p_reg);
# 305 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline void nrf_uarte_txrx_pins_set(NRF_UARTE_Type * p_reg,
                                             uint32_t pseltxd,
                                             uint32_t pselrxd);






static inline void nrf_uarte_txrx_pins_disconnect(NRF_UARTE_Type * p_reg);
# 323 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline uint32_t nrf_uarte_tx_pin_get(NRF_UARTE_Type * p_reg);
# 332 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline uint32_t nrf_uarte_rx_pin_get(NRF_UARTE_Type * p_reg);
# 341 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline uint32_t nrf_uarte_rts_pin_get(NRF_UARTE_Type * p_reg);
# 350 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline uint32_t nrf_uarte_cts_pin_get(NRF_UARTE_Type * p_reg);
# 359 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline void nrf_uarte_hwfc_pins_set(NRF_UARTE_Type * p_reg,
                                             uint32_t pselrts,
                                             uint32_t pselcts);






static inline void nrf_uarte_hwfc_pins_disconnect(NRF_UARTE_Type * p_reg);







static inline void nrf_uarte_task_trigger(NRF_UARTE_Type * p_reg, nrf_uarte_task_t task);
# 386 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline uint32_t nrf_uarte_task_address_get(NRF_UARTE_Type * p_reg, nrf_uarte_task_t task);
# 395 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline void nrf_uarte_configure(NRF_UARTE_Type * p_reg,
                                         nrf_uarte_parity_t parity,
                                         nrf_uarte_hwfc_t hwfc);







static inline void nrf_uarte_baudrate_set(NRF_UARTE_Type * p_reg, nrf_uarte_baudrate_t baudrate);
# 414 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline void nrf_uarte_tx_buffer_set(NRF_UARTE_Type * p_reg,
                                             uint8_t const * p_buffer,
                                             size_t length);
# 425 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline uint32_t nrf_uarte_tx_amount_get(NRF_UARTE_Type * p_reg);
# 434 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline void nrf_uarte_rx_buffer_set(NRF_UARTE_Type * p_reg,
                                             uint8_t * p_buffer,
                                             size_t length);
# 445 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline uint32_t nrf_uarte_rx_amount_get(NRF_UARTE_Type * p_reg);


static inline void nrf_uarte_event_clear(NRF_UARTE_Type * p_reg, nrf_uarte_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;

    volatile uint32_t dummy = *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event));
    (void)dummy;

}

static inline 
# 457 "../../../../../../modules/nrfx/hal/nrf_uarte.h" 3 4
               _Bool 
# 457 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
                    nrf_uarte_event_check(NRF_UARTE_Type * p_reg, nrf_uarte_event_t event)
{
    return (
# 459 "../../../../../../modules/nrfx/hal/nrf_uarte.h" 3 4
           _Bool
# 459 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
               )*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

static inline uint32_t nrf_uarte_event_address_get(NRF_UARTE_Type * p_reg,
                                                    nrf_uarte_event_t event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

static inline void nrf_uarte_shorts_enable(NRF_UARTE_Type * p_reg, uint32_t mask)
{
    p_reg->SHORTS |= mask;
}

static inline void nrf_uarte_shorts_disable(NRF_UARTE_Type * p_reg, uint32_t mask)
{
    p_reg->SHORTS &= ~(mask);
}

static inline void nrf_uarte_int_enable(NRF_UARTE_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

static inline 
# 483 "../../../../../../modules/nrfx/hal/nrf_uarte.h" 3 4
               _Bool 
# 483 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
                    nrf_uarte_int_enable_check(NRF_UARTE_Type * p_reg, nrf_uarte_int_mask_t mask)
{
    return (
# 485 "../../../../../../modules/nrfx/hal/nrf_uarte.h" 3 4
           _Bool
# 485 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
               )(p_reg->INTENSET & mask);
}

static inline void nrf_uarte_int_disable(NRF_UARTE_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}
# 523 "../../../../../../modules/nrfx/hal/nrf_uarte.h"
static inline uint32_t nrf_uarte_errorsrc_get_and_clear(NRF_UARTE_Type * p_reg)
{
    uint32_t errsrc_mask = p_reg->ERRORSRC;
    p_reg->ERRORSRC = errsrc_mask;
    return errsrc_mask;
}

static inline void nrf_uarte_enable(NRF_UARTE_Type * p_reg)
{
    p_reg->ENABLE = (8UL);
}

static inline void nrf_uarte_disable(NRF_UARTE_Type * p_reg)
{
    p_reg->ENABLE = (0UL);
}

static inline void nrf_uarte_txrx_pins_set(NRF_UARTE_Type * p_reg, uint32_t pseltxd, uint32_t pselrxd)
{
    p_reg->PSEL.TXD = pseltxd;
    p_reg->PSEL.RXD = pselrxd;
}

static inline void nrf_uarte_txrx_pins_disconnect(NRF_UARTE_Type * p_reg)
{
    nrf_uarte_txrx_pins_set(p_reg, 0xFFFFFFFF, 0xFFFFFFFF);
}

static inline uint32_t nrf_uarte_tx_pin_get(NRF_UARTE_Type * p_reg)
{
    return p_reg->PSEL.TXD;
}

static inline uint32_t nrf_uarte_rx_pin_get(NRF_UARTE_Type * p_reg)
{
    return p_reg->PSEL.RXD;
}

static inline uint32_t nrf_uarte_rts_pin_get(NRF_UARTE_Type * p_reg)
{
    return p_reg->PSEL.RTS;
}

static inline uint32_t nrf_uarte_cts_pin_get(NRF_UARTE_Type * p_reg)
{
    return p_reg->PSEL.CTS;
}

static inline void nrf_uarte_hwfc_pins_set(NRF_UARTE_Type * p_reg, uint32_t pselrts, uint32_t pselcts)
{
    p_reg->PSEL.RTS = pselrts;
    p_reg->PSEL.CTS = pselcts;
}

static inline void nrf_uarte_hwfc_pins_disconnect(NRF_UARTE_Type * p_reg)
{
    nrf_uarte_hwfc_pins_set(p_reg, 0xFFFFFFFF, 0xFFFFFFFF);
}

static inline void nrf_uarte_task_trigger(NRF_UARTE_Type * p_reg, nrf_uarte_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

static inline uint32_t nrf_uarte_task_address_get(NRF_UARTE_Type * p_reg, nrf_uarte_task_t task)
{
    return (uint32_t)p_reg + (uint32_t)task;
}

static inline void nrf_uarte_configure(NRF_UARTE_Type * p_reg,
                                         nrf_uarte_parity_t parity,
                                         nrf_uarte_hwfc_t hwfc)
{
    p_reg->CONFIG = (uint32_t)parity | (uint32_t)hwfc;
}

static inline void nrf_uarte_baudrate_set(NRF_UARTE_Type * p_reg, nrf_uarte_baudrate_t baudrate)
{
    p_reg->BAUDRATE = baudrate;
}

static inline void nrf_uarte_tx_buffer_set(NRF_UARTE_Type * p_reg,
                                             uint8_t const * p_buffer,
                                             size_t length)
{
    p_reg->TXD.PTR = (uint32_t)p_buffer;
    p_reg->TXD.MAXCNT = length;
}

static inline uint32_t nrf_uarte_tx_amount_get(NRF_UARTE_Type * p_reg)
{
    return p_reg->TXD.AMOUNT;
}

static inline void nrf_uarte_rx_buffer_set(NRF_UARTE_Type * p_reg,
                                             uint8_t * p_buffer,
                                             size_t length)
{
    p_reg->RXD.PTR = (uint32_t)p_buffer;
    p_reg->RXD.MAXCNT = length;
}

static inline uint32_t nrf_uarte_rx_amount_get(NRF_UARTE_Type * p_reg)
{
    return p_reg->RXD.AMOUNT;
}
# 41 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h" 2
# 68 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_board.h"
void txm_board_init(void);
void led_green(void);
void led_red(void);
void led_off(void);
void buzzer_on(void);
void buzzer_off(void);
void regulator_on(void);
void regulator_off(void);
void max323_on(void);
void max323_off(void);
int sense_input_volate(void);
# 3 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_uart.c" 2
# 11 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_uart.c"
static void uart_event_handle(app_uart_evt_t * p_event)
{
    static uint8_t data_array[(247 - 1 - 2)];
    static uint8_t index = 0;
    uint32_t err_code;

    switch (p_event->evt_type)
    {
        case APP_UART_DATA_READY:

            ((void)(app_uart_get(&data_array[index])));
            index++;

            if ((data_array[index - 1] == '\n') ||
                (data_array[index - 1] == '\r') ||
                (index >= m_ble_nus_max_data_len))
            {
                if (index > 1)
                {
                    if (0 && (3 >= NRF_LOG_SEVERITY_DEBUG) && (NRF_LOG_SEVERITY_DEBUG <= 3)) { if (NRF_LOG_SEVERITY_DEBUG >= NRF_LOG_SEVERITY_DEBUG) { (void)(((NRF_LOG_SEVERITY_DEBUG) | 0 << 16)); (void)("Ready to send data over BLE NUS"); } };
                    if (0 && (3 >= NRF_LOG_SEVERITY_DEBUG) && (NRF_LOG_SEVERITY_DEBUG <= 3)) { if (NRF_LOG_SEVERITY_DEBUG >= NRF_LOG_SEVERITY_DEBUG) { (void)(((NRF_LOG_SEVERITY_DEBUG) | 0 << 16)); (void)((data_array)); (void)(index); } };

                    do
                    {
# 46 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_uart.c"
                    } while (err_code == ((0x0) + 19));
                }

                index = 0;
            }
            break;

        case APP_UART_COMMUNICATION_ERROR:

            do { app_error_handler_bare((p_event->data.error_communication)); } while (0);
            break;

        case APP_UART_FIFO_ERROR:
            do { app_error_handler_bare((p_event->data.error_code)); } while (0);
            break;

        default:
            break;
    }
}

void txm_uart_init(void)
{
    uint32_t err_code;
    app_uart_comm_params_t const comm_params =
    {
        .rx_pin_no = 8,
        .tx_pin_no = 6,
        .rts_pin_no = 5,
        .cts_pin_no = 7,
        .flow_control = APP_UART_FLOW_CONTROL_DISABLED,
        .use_parity = 
# 77 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_uart.c" 3 4
                       0
# 77 "/home/shailesh/workspace/nordic/software/DeviceDownload/nRF5_SDK_17.0.2_d674dde/examples/ble_peripheral/txm/txm_uart.c"
                            ,
        .baud_rate = NRF_UART_BAUDRATE_115200
    };

    do { app_uart_buffers_t buffers; static uint8_t rx_buf[256]; static uint8_t tx_buf[256]; buffers.rx_buf = rx_buf; buffers.rx_buf_size = sizeof (rx_buf); buffers.tx_buf = tx_buf; buffers.tx_buf_size = sizeof (tx_buf); err_code = app_uart_init(&comm_params, &buffers, uart_event_handle, APP_IRQ_PRIORITY_LOWEST); } while (0)




                                ;
    do { const uint32_t LOCAL_ERR_CODE = (err_code); if (LOCAL_ERR_CODE != ((0x0) + 0)) { do { app_error_handler_bare((LOCAL_ERR_CODE)); } while (0); } } while (0);
}
