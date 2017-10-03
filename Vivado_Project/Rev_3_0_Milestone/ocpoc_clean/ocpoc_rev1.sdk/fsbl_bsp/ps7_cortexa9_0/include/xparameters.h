/* Definition for CPU ID */
#define XPAR_CPU_ID 0

/* Definitions for peripheral PS7_CORTEXA9_0 */
#define XPAR_PS7_CORTEXA9_0_CPU_CLK_FREQ_HZ 666666687


/******************************************************************/

/* Canonical definitions for peripheral PS7_CORTEXA9_0 */
#define XPAR_CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ 666666687


/******************************************************************/

#include "xparameters_ps.h"

#define STDIN_BASEADDRESS 0xE0000000
#define STDOUT_BASEADDRESS 0xE0000000

/******************************************************************/

/* Definitions for driver RC_RECEIVER_INPUT */
#define XPAR_RC_RECEIVER_INPUT_NUM_INSTANCES 1

/* Definitions for peripheral RC_RECEIVER_INPUT_0 */
#define XPAR_RC_RECEIVER_INPUT_0_DEVICE_ID 0
#define XPAR_RC_RECEIVER_INPUT_0_S00_AXI_BASEADDR 0x43CA0000
#define XPAR_RC_RECEIVER_INPUT_0_S00_AXI_HIGHADDR 0x43CAFFFF


/******************************************************************/

/* Definitions for driver CANPS */
#define XPAR_XCANPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_CAN_0 */
#define XPAR_PS7_CAN_0_DEVICE_ID 0
#define XPAR_PS7_CAN_0_BASEADDR 0xE0008000
#define XPAR_PS7_CAN_0_HIGHADDR 0xE0008FFF
#define XPAR_PS7_CAN_0_CAN_CLK_FREQ_HZ 100000000


/******************************************************************/

/* Canonical definitions for peripheral PS7_CAN_0 */
#define XPAR_XCANPS_0_DEVICE_ID XPAR_PS7_CAN_0_DEVICE_ID
#define XPAR_XCANPS_0_BASEADDR 0xE0008000
#define XPAR_XCANPS_0_HIGHADDR 0xE0008FFF
#define XPAR_XCANPS_0_CAN_CLK_FREQ_HZ 100000000


/******************************************************************/


/* Definitions for peripheral PS7_DDR_0 */
#define XPAR_PS7_DDR_0_S_AXI_BASEADDR 0x00100000
#define XPAR_PS7_DDR_0_S_AXI_HIGHADDR 0x1FFFFFFF


/******************************************************************/

/* Definitions for driver DEVCFG */
#define XPAR_XDCFG_NUM_INSTANCES 1

/* Definitions for peripheral PS7_DEV_CFG_0 */
#define XPAR_PS7_DEV_CFG_0_DEVICE_ID 0
#define XPAR_PS7_DEV_CFG_0_BASEADDR 0xF8007000
#define XPAR_PS7_DEV_CFG_0_HIGHADDR 0xF80070FF


/******************************************************************/

/* Canonical definitions for peripheral PS7_DEV_CFG_0 */
#define XPAR_XDCFG_0_DEVICE_ID XPAR_PS7_DEV_CFG_0_DEVICE_ID
#define XPAR_XDCFG_0_BASEADDR 0xF8007000
#define XPAR_XDCFG_0_HIGHADDR 0xF80070FF


/******************************************************************/

/* Definitions for driver DMAPS */
#define XPAR_XDMAPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_DMA_NS */
#define XPAR_PS7_DMA_NS_DEVICE_ID 0
#define XPAR_PS7_DMA_NS_BASEADDR 0xF8004000
#define XPAR_PS7_DMA_NS_HIGHADDR 0xF8004FFF


/* Definitions for peripheral PS7_DMA_S */
#define XPAR_PS7_DMA_S_DEVICE_ID 1
#define XPAR_PS7_DMA_S_BASEADDR 0xF8003000
#define XPAR_PS7_DMA_S_HIGHADDR 0xF8003FFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_DMA_NS */
#define XPAR_XDMAPS_0_DEVICE_ID XPAR_PS7_DMA_NS_DEVICE_ID
#define XPAR_XDMAPS_0_BASEADDR 0xF8004000
#define XPAR_XDMAPS_0_HIGHADDR 0xF8004FFF

/* Canonical definitions for peripheral PS7_DMA_S */
#define XPAR_XDMAPS_1_DEVICE_ID XPAR_PS7_DMA_S_DEVICE_ID
#define XPAR_XDMAPS_1_BASEADDR 0xF8003000
#define XPAR_XDMAPS_1_HIGHADDR 0xF8003FFF


/******************************************************************/

/* Definitions for driver EMACPS */
#define XPAR_XEMACPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_ETHERNET_0 */
#define XPAR_PS7_ETHERNET_0_DEVICE_ID 0
#define XPAR_PS7_ETHERNET_0_BASEADDR 0xE000B000
#define XPAR_PS7_ETHERNET_0_HIGHADDR 0xE000BFFF
#define XPAR_PS7_ETHERNET_0_ENET_CLK_FREQ_HZ 125000000
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_1000MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_1000MBPS_DIV1 1
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_100MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_100MBPS_DIV1 5
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_10MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_10MBPS_DIV1 50


/******************************************************************/

/* Canonical definitions for peripheral PS7_ETHERNET_0 */
#define XPAR_XEMACPS_0_DEVICE_ID XPAR_PS7_ETHERNET_0_DEVICE_ID
#define XPAR_XEMACPS_0_BASEADDR 0xE000B000
#define XPAR_XEMACPS_0_HIGHADDR 0xE000BFFF
#define XPAR_XEMACPS_0_ENET_CLK_FREQ_HZ 125000000
#define XPAR_XEMACPS_0_ENET_SLCR_1000Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_1000Mbps_DIV1 1
#define XPAR_XEMACPS_0_ENET_SLCR_100Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_100Mbps_DIV1 5
#define XPAR_XEMACPS_0_ENET_SLCR_10Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_10Mbps_DIV1 50


/******************************************************************/


/* Definitions for peripheral PS7_AFI_0 */
#define XPAR_PS7_AFI_0_S_AXI_BASEADDR 0xF8008000
#define XPAR_PS7_AFI_0_S_AXI_HIGHADDR 0xF8008FFF


/* Definitions for peripheral PS7_AFI_1 */
#define XPAR_PS7_AFI_1_S_AXI_BASEADDR 0xF8009000
#define XPAR_PS7_AFI_1_S_AXI_HIGHADDR 0xF8009FFF


/* Definitions for peripheral PS7_AFI_2 */
#define XPAR_PS7_AFI_2_S_AXI_BASEADDR 0xF800A000
#define XPAR_PS7_AFI_2_S_AXI_HIGHADDR 0xF800AFFF


/* Definitions for peripheral PS7_AFI_3 */
#define XPAR_PS7_AFI_3_S_AXI_BASEADDR 0xF800B000
#define XPAR_PS7_AFI_3_S_AXI_HIGHADDR 0xF800BFFF


/* Definitions for peripheral PS7_DDRC_0 */
#define XPAR_PS7_DDRC_0_S_AXI_BASEADDR 0xF8006000
#define XPAR_PS7_DDRC_0_S_AXI_HIGHADDR 0xF8006FFF


/* Definitions for peripheral PS7_GLOBALTIMER_0 */
#define XPAR_PS7_GLOBALTIMER_0_S_AXI_BASEADDR 0xF8F00200
#define XPAR_PS7_GLOBALTIMER_0_S_AXI_HIGHADDR 0xF8F002FF


/* Definitions for peripheral PS7_GPV_0 */
#define XPAR_PS7_GPV_0_S_AXI_BASEADDR 0xF8900000
#define XPAR_PS7_GPV_0_S_AXI_HIGHADDR 0xF89FFFFF


/* Definitions for peripheral PS7_INTC_DIST_0 */
#define XPAR_PS7_INTC_DIST_0_S_AXI_BASEADDR 0xF8F01000
#define XPAR_PS7_INTC_DIST_0_S_AXI_HIGHADDR 0xF8F01FFF


/* Definitions for peripheral PS7_IOP_BUS_CONFIG_0 */
#define XPAR_PS7_IOP_BUS_CONFIG_0_S_AXI_BASEADDR 0xE0200000
#define XPAR_PS7_IOP_BUS_CONFIG_0_S_AXI_HIGHADDR 0xE0200FFF


/* Definitions for peripheral PS7_L2CACHEC_0 */
#define XPAR_PS7_L2CACHEC_0_S_AXI_BASEADDR 0xF8F02000
#define XPAR_PS7_L2CACHEC_0_S_AXI_HIGHADDR 0xF8F02FFF


/* Definitions for peripheral PS7_OCMC_0 */
#define XPAR_PS7_OCMC_0_S_AXI_BASEADDR 0xF800C000
#define XPAR_PS7_OCMC_0_S_AXI_HIGHADDR 0xF800CFFF


/* Definitions for peripheral PS7_PL310_0 */
#define XPAR_PS7_PL310_0_S_AXI_BASEADDR 0xF8F02000
#define XPAR_PS7_PL310_0_S_AXI_HIGHADDR 0xF8F02FFF


/* Definitions for peripheral PS7_PMU_0 */
#define XPAR_PS7_PMU_0_S_AXI_BASEADDR 0xF8891000
#define XPAR_PS7_PMU_0_S_AXI_HIGHADDR 0xF8891FFF
#define XPAR_PS7_PMU_0_PMU1_S_AXI_BASEADDR 0xF8893000
#define XPAR_PS7_PMU_0_PMU1_S_AXI_HIGHADDR 0xF8893FFF


/* Definitions for peripheral PS7_QSPI_LINEAR_0 */
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_BASEADDR 0xFC000000
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_HIGHADDR 0xFCFFFFFF


/* Definitions for peripheral PS7_RAM_0 */
#define XPAR_PS7_RAM_0_S_AXI_BASEADDR 0x00000000
#define XPAR_PS7_RAM_0_S_AXI_HIGHADDR 0x0003FFFF


/* Definitions for peripheral PS7_RAM_1 */
#define XPAR_PS7_RAM_1_S_AXI_BASEADDR 0xFFFC0000
#define XPAR_PS7_RAM_1_S_AXI_HIGHADDR 0xFFFFFFFF


/* Definitions for peripheral PS7_SCUC_0 */
#define XPAR_PS7_SCUC_0_S_AXI_BASEADDR 0xF8F00000
#define XPAR_PS7_SCUC_0_S_AXI_HIGHADDR 0xF8F000FC


/* Definitions for peripheral PS7_SLCR_0 */
#define XPAR_PS7_SLCR_0_S_AXI_BASEADDR 0xF8000000
#define XPAR_PS7_SLCR_0_S_AXI_HIGHADDR 0xF8000FFF


/* Definitions for peripheral AXI_OCPOC_PWM_CONTROLLER_0 */
#define XPAR_AXI_OCPOC_PWM_CONTROLLER_0_0 0x43C00000
#define XPAR_AXI_OCPOC_PWM_CONTROLLER_0_0 0x43C00000


/******************************************************************/

/* Definitions for driver GPIOPS */
#define XPAR_XGPIOPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_GPIO_0 */
#define XPAR_PS7_GPIO_0_DEVICE_ID 0
#define XPAR_PS7_GPIO_0_BASEADDR 0xE000A000
#define XPAR_PS7_GPIO_0_HIGHADDR 0xE000AFFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_GPIO_0 */
#define XPAR_XGPIOPS_0_DEVICE_ID XPAR_PS7_GPIO_0_DEVICE_ID
#define XPAR_XGPIOPS_0_BASEADDR 0xE000A000
#define XPAR_XGPIOPS_0_HIGHADDR 0xE000AFFF


/******************************************************************/

/* Definitions for driver IIC */
#define XPAR_XIIC_NUM_INSTANCES 4

/* Definitions for peripheral AXI_IIC_0 */
#define XPAR_AXI_IIC_0_DEVICE_ID 0
#define XPAR_AXI_IIC_0_BASEADDR 0x41600000
#define XPAR_AXI_IIC_0_HIGHADDR 0x4160FFFF
#define XPAR_AXI_IIC_0_TEN_BIT_ADR 0
#define XPAR_AXI_IIC_0_GPO_WIDTH 1


/* Definitions for peripheral AXI_IIC_1 */
#define XPAR_AXI_IIC_1_DEVICE_ID 1
#define XPAR_AXI_IIC_1_BASEADDR 0x41610000
#define XPAR_AXI_IIC_1_HIGHADDR 0x4161FFFF
#define XPAR_AXI_IIC_1_TEN_BIT_ADR 0
#define XPAR_AXI_IIC_1_GPO_WIDTH 1


/* Definitions for peripheral AXI_IIC_2 */
#define XPAR_AXI_IIC_2_DEVICE_ID 2
#define XPAR_AXI_IIC_2_BASEADDR 0x41620000
#define XPAR_AXI_IIC_2_HIGHADDR 0x4162FFFF
#define XPAR_AXI_IIC_2_TEN_BIT_ADR 0
#define XPAR_AXI_IIC_2_GPO_WIDTH 1


/* Definitions for peripheral AXI_IIC_3 */
#define XPAR_AXI_IIC_3_DEVICE_ID 3
#define XPAR_AXI_IIC_3_BASEADDR 0x41630000
#define XPAR_AXI_IIC_3_HIGHADDR 0x4163FFFF
#define XPAR_AXI_IIC_3_TEN_BIT_ADR 0
#define XPAR_AXI_IIC_3_GPO_WIDTH 1


/******************************************************************/

/* Canonical definitions for peripheral AXI_IIC_0 */
#define XPAR_IIC_0_DEVICE_ID XPAR_AXI_IIC_0_DEVICE_ID
#define XPAR_IIC_0_BASEADDR 0x41600000
#define XPAR_IIC_0_HIGHADDR 0x4160FFFF
#define XPAR_IIC_0_TEN_BIT_ADR 0
#define XPAR_IIC_0_GPO_WIDTH 1

/* Canonical definitions for peripheral AXI_IIC_1 */
#define XPAR_IIC_1_DEVICE_ID XPAR_AXI_IIC_1_DEVICE_ID
#define XPAR_IIC_1_BASEADDR 0x41610000
#define XPAR_IIC_1_HIGHADDR 0x4161FFFF
#define XPAR_IIC_1_TEN_BIT_ADR 0
#define XPAR_IIC_1_GPO_WIDTH 1

/* Canonical definitions for peripheral AXI_IIC_2 */
#define XPAR_IIC_2_DEVICE_ID XPAR_AXI_IIC_2_DEVICE_ID
#define XPAR_IIC_2_BASEADDR 0x41620000
#define XPAR_IIC_2_HIGHADDR 0x4162FFFF
#define XPAR_IIC_2_TEN_BIT_ADR 0
#define XPAR_IIC_2_GPO_WIDTH 1

/* Canonical definitions for peripheral AXI_IIC_3 */
#define XPAR_IIC_3_DEVICE_ID XPAR_AXI_IIC_3_DEVICE_ID
#define XPAR_IIC_3_BASEADDR 0x41630000
#define XPAR_IIC_3_HIGHADDR 0x4163FFFF
#define XPAR_IIC_3_TEN_BIT_ADR 0
#define XPAR_IIC_3_GPO_WIDTH 1


/******************************************************************/

/* Definitions for driver IICPS */
#define XPAR_XIICPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_I2C_0 */
#define XPAR_PS7_I2C_0_DEVICE_ID 0
#define XPAR_PS7_I2C_0_BASEADDR 0xE0004000
#define XPAR_PS7_I2C_0_HIGHADDR 0xE0004FFF
#define XPAR_PS7_I2C_0_I2C_CLK_FREQ_HZ 111111115


/* Definitions for peripheral PS7_I2C_1 */
#define XPAR_PS7_I2C_1_DEVICE_ID 1
#define XPAR_PS7_I2C_1_BASEADDR 0xE0005000
#define XPAR_PS7_I2C_1_HIGHADDR 0xE0005FFF
#define XPAR_PS7_I2C_1_I2C_CLK_FREQ_HZ 111111115


/******************************************************************/

/* Canonical definitions for peripheral PS7_I2C_0 */
#define XPAR_XIICPS_0_DEVICE_ID XPAR_PS7_I2C_0_DEVICE_ID
#define XPAR_XIICPS_0_BASEADDR 0xE0004000
#define XPAR_XIICPS_0_HIGHADDR 0xE0004FFF
#define XPAR_XIICPS_0_I2C_CLK_FREQ_HZ 111111115

/* Canonical definitions for peripheral PS7_I2C_1 */
#define XPAR_XIICPS_1_DEVICE_ID XPAR_PS7_I2C_1_DEVICE_ID
#define XPAR_XIICPS_1_BASEADDR 0xE0005000
#define XPAR_XIICPS_1_HIGHADDR 0xE0005FFF
#define XPAR_XIICPS_1_I2C_CLK_FREQ_HZ 111111115


/******************************************************************/

/* Definitions for driver QSPIPS */
#define XPAR_XQSPIPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_QSPI_0 */
#define XPAR_PS7_QSPI_0_DEVICE_ID 0
#define XPAR_PS7_QSPI_0_BASEADDR 0xE000D000
#define XPAR_PS7_QSPI_0_HIGHADDR 0xE000DFFF
#define XPAR_PS7_QSPI_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_PS7_QSPI_0_QSPI_MODE 0


/******************************************************************/

/* Canonical definitions for peripheral PS7_QSPI_0 */
#define XPAR_XQSPIPS_0_DEVICE_ID XPAR_PS7_QSPI_0_DEVICE_ID
#define XPAR_XQSPIPS_0_BASEADDR 0xE000D000
#define XPAR_XQSPIPS_0_HIGHADDR 0xE000DFFF
#define XPAR_XQSPIPS_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_XQSPIPS_0_QSPI_MODE 0


/******************************************************************/

/* Definitions for Fabric interrupts connected to ps7_scugic_0 */
#define XPAR_FABRIC_AXI_IIC_0_IIC2INTC_IRPT_INTR 61
#define XPAR_FABRIC_AXI_IIC_1_IIC2INTC_IRPT_INTR 62
#define XPAR_FABRIC_AXI_IIC_2_IIC2INTC_IRPT_INTR 63
#define XPAR_FABRIC_AXI_IIC_3_IIC2INTC_IRPT_INTR 64
#define XPAR_FABRIC_XADC_WIZ_0_IP2INTC_IRPT_INTR 65
#define XPAR_FABRIC_AXI_UART16550_0_IP2INTC_IRPT_INTR 66
#define XPAR_FABRIC_AXI_UART16550_1_IP2INTC_IRPT_INTR 67
#define XPAR_FABRIC_AXI_UART16550_3_IP2INTC_IRPT_INTR 68
#define XPAR_FABRIC_AXI_UART16550_4_IP2INTC_IRPT_INTR 84
#define XPAR_FABRIC_AXI_UART16550_5_IP2INTC_IRPT_INTR 85
#define XPAR_FABRIC_AXI_UART16550_6_IP2INTC_IRPT_INTR 86
#define XPAR_FABRIC_AXI_UART16550_7_IP2INTC_IRPT_INTR 87
#define XPAR_FABRIC_AXI_UART16550_2_IP2INTC_IRPT_INTR 88

/******************************************************************/

/* Canonical definitions for Fabric interrupts connected to ps7_scugic_0 */

/******************************************************************/

/* Definitions for driver SCUGIC */
#define XPAR_XSCUGIC_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUGIC_0 */
#define XPAR_PS7_SCUGIC_0_DEVICE_ID 0
#define XPAR_PS7_SCUGIC_0_BASEADDR 0xF8F00100
#define XPAR_PS7_SCUGIC_0_HIGHADDR 0xF8F001FF
#define XPAR_PS7_SCUGIC_0_DIST_BASEADDR 0xF8F01000


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUGIC_0 */
#define XPAR_SCUGIC_0_DEVICE_ID 0
#define XPAR_SCUGIC_0_CPU_BASEADDR 0xF8F00100
#define XPAR_SCUGIC_0_CPU_HIGHADDR 0xF8F001FF
#define XPAR_SCUGIC_0_DIST_BASEADDR 0xF8F01000


/******************************************************************/

/* Definitions for driver SCUTIMER */
#define XPAR_XSCUTIMER_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUTIMER_0 */
#define XPAR_PS7_SCUTIMER_0_DEVICE_ID 0
#define XPAR_PS7_SCUTIMER_0_BASEADDR 0xF8F00600
#define XPAR_PS7_SCUTIMER_0_HIGHADDR 0xF8F0061F


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUTIMER_0 */
#define XPAR_XSCUTIMER_0_DEVICE_ID XPAR_PS7_SCUTIMER_0_DEVICE_ID
#define XPAR_XSCUTIMER_0_BASEADDR 0xF8F00600
#define XPAR_XSCUTIMER_0_HIGHADDR 0xF8F0061F


/******************************************************************/

/* Definitions for driver SCUWDT */
#define XPAR_XSCUWDT_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUWDT_0 */
#define XPAR_PS7_SCUWDT_0_DEVICE_ID 0
#define XPAR_PS7_SCUWDT_0_BASEADDR 0xF8F00620
#define XPAR_PS7_SCUWDT_0_HIGHADDR 0xF8F006FF


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUWDT_0 */
#define XPAR_SCUWDT_0_DEVICE_ID XPAR_PS7_SCUWDT_0_DEVICE_ID
#define XPAR_SCUWDT_0_BASEADDR 0xF8F00620
#define XPAR_SCUWDT_0_HIGHADDR 0xF8F006FF


/******************************************************************/

/* Definitions for driver SDPS */
#define XPAR_XSDPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SD_0 */
#define XPAR_PS7_SD_0_DEVICE_ID 0
#define XPAR_PS7_SD_0_BASEADDR 0xE0100000
#define XPAR_PS7_SD_0_HIGHADDR 0xE0100FFF
#define XPAR_PS7_SD_0_SDIO_CLK_FREQ_HZ 100000000
#define XPAR_PS7_SD_0_HAS_CD 0
#define XPAR_PS7_SD_0_HAS_WP 0


/******************************************************************/

/* Canonical definitions for peripheral PS7_SD_0 */
#define XPAR_XSDPS_0_DEVICE_ID XPAR_PS7_SD_0_DEVICE_ID
#define XPAR_XSDPS_0_BASEADDR 0xE0100000
#define XPAR_XSDPS_0_HIGHADDR 0xE0100FFF
#define XPAR_XSDPS_0_SDIO_CLK_FREQ_HZ 100000000
#define XPAR_XSDPS_0_HAS_CD 0
#define XPAR_XSDPS_0_HAS_WP 0


/******************************************************************/

/* Definitions for driver SPIPS */
#define XPAR_XSPIPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_SPI_0 */
#define XPAR_PS7_SPI_0_DEVICE_ID 0
#define XPAR_PS7_SPI_0_BASEADDR 0xE0006000
#define XPAR_PS7_SPI_0_HIGHADDR 0xE0006FFF
#define XPAR_PS7_SPI_0_SPI_CLK_FREQ_HZ 166666672


/* Definitions for peripheral PS7_SPI_1 */
#define XPAR_PS7_SPI_1_DEVICE_ID 1
#define XPAR_PS7_SPI_1_BASEADDR 0xE0007000
#define XPAR_PS7_SPI_1_HIGHADDR 0xE0007FFF
#define XPAR_PS7_SPI_1_SPI_CLK_FREQ_HZ 166666672


/******************************************************************/

/* Canonical definitions for peripheral PS7_SPI_0 */
#define XPAR_XSPIPS_0_DEVICE_ID XPAR_PS7_SPI_0_DEVICE_ID
#define XPAR_XSPIPS_0_BASEADDR 0xE0006000
#define XPAR_XSPIPS_0_HIGHADDR 0xE0006FFF
#define XPAR_XSPIPS_0_SPI_CLK_FREQ_HZ 166666672

/* Canonical definitions for peripheral PS7_SPI_1 */
#define XPAR_XSPIPS_1_DEVICE_ID XPAR_PS7_SPI_1_DEVICE_ID
#define XPAR_XSPIPS_1_BASEADDR 0xE0007000
#define XPAR_XSPIPS_1_HIGHADDR 0xE0007FFF
#define XPAR_XSPIPS_1_SPI_CLK_FREQ_HZ 166666672


/******************************************************************/

/* Definitions for driver SYSMON */
#define XPAR_XSYSMON_NUM_INSTANCES 1

/* Definitions for peripheral XADC_WIZ_0 */
#define XPAR_XADC_WIZ_0_IP_TYPE 0
#define XPAR_XADC_WIZ_0_DEVICE_ID 0
#define XPAR_XADC_WIZ_0_BASEADDR 0x43C50000
#define XPAR_XADC_WIZ_0_HIGHADDR 0x43C5FFFF
#define XPAR_XADC_WIZ_0_INCLUDE_INTR 1


/******************************************************************/

/* Canonical definitions for peripheral XADC_WIZ_0 */
#define XPAR_SYSMON_0_IP_TYPE 0
#define XPAR_SYSMON_0_DEVICE_ID XPAR_XADC_WIZ_0_DEVICE_ID
#define XPAR_SYSMON_0_BASEADDR 0x43C50000
#define XPAR_SYSMON_0_HIGHADDR 0x43C5FFFF
#define XPAR_SYSMON_0_INCLUDE_INTR 1


/******************************************************************/

/* Definitions for driver TTCPS */
#define XPAR_XTTCPS_NUM_INSTANCES 6

/* Definitions for peripheral PS7_TTC_0 */
#define XPAR_PS7_TTC_0_DEVICE_ID 0
#define XPAR_PS7_TTC_0_BASEADDR 0XF8001000
#define XPAR_PS7_TTC_0_TTC_CLK_FREQ_HZ 111111115
#define XPAR_PS7_TTC_0_TTC_CLK_CLKSRC 0
#define XPAR_PS7_TTC_1_DEVICE_ID 1
#define XPAR_PS7_TTC_1_BASEADDR 0XF8001004
#define XPAR_PS7_TTC_1_TTC_CLK_FREQ_HZ 111111115
#define XPAR_PS7_TTC_1_TTC_CLK_CLKSRC 0
#define XPAR_PS7_TTC_2_DEVICE_ID 2
#define XPAR_PS7_TTC_2_BASEADDR 0XF8001008
#define XPAR_PS7_TTC_2_TTC_CLK_FREQ_HZ 111111115
#define XPAR_PS7_TTC_2_TTC_CLK_CLKSRC 0


/* Definitions for peripheral PS7_TTC_1 */
#define XPAR_PS7_TTC_3_DEVICE_ID 3
#define XPAR_PS7_TTC_3_BASEADDR 0XF8002000
#define XPAR_PS7_TTC_3_TTC_CLK_FREQ_HZ 111111115
#define XPAR_PS7_TTC_3_TTC_CLK_CLKSRC 0
#define XPAR_PS7_TTC_4_DEVICE_ID 4
#define XPAR_PS7_TTC_4_BASEADDR 0XF8002004
#define XPAR_PS7_TTC_4_TTC_CLK_FREQ_HZ 111111115
#define XPAR_PS7_TTC_4_TTC_CLK_CLKSRC 0
#define XPAR_PS7_TTC_5_DEVICE_ID 5
#define XPAR_PS7_TTC_5_BASEADDR 0XF8002008
#define XPAR_PS7_TTC_5_TTC_CLK_FREQ_HZ 111111115
#define XPAR_PS7_TTC_5_TTC_CLK_CLKSRC 0


/******************************************************************/

/* Canonical definitions for peripheral PS7_TTC_0 */
#define XPAR_XTTCPS_0_DEVICE_ID XPAR_PS7_TTC_0_DEVICE_ID
#define XPAR_XTTCPS_0_BASEADDR 0xF8001000
#define XPAR_XTTCPS_0_TTC_CLK_FREQ_HZ 111111115
#define XPAR_XTTCPS_0_TTC_CLK_CLKSRC 0

#define XPAR_XTTCPS_1_DEVICE_ID XPAR_PS7_TTC_1_DEVICE_ID
#define XPAR_XTTCPS_1_BASEADDR 0xF8001004
#define XPAR_XTTCPS_1_TTC_CLK_FREQ_HZ 111111115
#define XPAR_XTTCPS_1_TTC_CLK_CLKSRC 0

#define XPAR_XTTCPS_2_DEVICE_ID XPAR_PS7_TTC_2_DEVICE_ID
#define XPAR_XTTCPS_2_BASEADDR 0xF8001008
#define XPAR_XTTCPS_2_TTC_CLK_FREQ_HZ 111111115
#define XPAR_XTTCPS_2_TTC_CLK_CLKSRC 0

/* Canonical definitions for peripheral PS7_TTC_1 */
#define XPAR_XTTCPS_3_DEVICE_ID XPAR_PS7_TTC_3_DEVICE_ID
#define XPAR_XTTCPS_3_BASEADDR 0xF8002000
#define XPAR_XTTCPS_3_TTC_CLK_FREQ_HZ 111111115
#define XPAR_XTTCPS_3_TTC_CLK_CLKSRC 0

#define XPAR_XTTCPS_4_DEVICE_ID XPAR_PS7_TTC_4_DEVICE_ID
#define XPAR_XTTCPS_4_BASEADDR 0xF8002004
#define XPAR_XTTCPS_4_TTC_CLK_FREQ_HZ 111111115
#define XPAR_XTTCPS_4_TTC_CLK_CLKSRC 0

#define XPAR_XTTCPS_5_DEVICE_ID XPAR_PS7_TTC_5_DEVICE_ID
#define XPAR_XTTCPS_5_BASEADDR 0xF8002008
#define XPAR_XTTCPS_5_TTC_CLK_FREQ_HZ 111111115
#define XPAR_XTTCPS_5_TTC_CLK_CLKSRC 0


/******************************************************************/

/* Definitions for driver UARTNS550 */
#define XPAR_XUARTNS550_NUM_INSTANCES 8
#define XPAR_XUARTNS550_CLOCK_HZ 100000000

/* Definitions for peripheral AXI_UART16550_0 */
#define XPAR_AXI_UART16550_0_DEVICE_ID 0
#define XPAR_AXI_UART16550_0_BASEADDR 0x43C10000
#define XPAR_AXI_UART16550_0_HIGHADDR 0x43C1FFFF
#define XPAR_AXI_UART16550_0_CLOCK_FREQ_HZ 100000000


/* Definitions for peripheral AXI_UART16550_1 */
#define XPAR_AXI_UART16550_1_DEVICE_ID 1
#define XPAR_AXI_UART16550_1_BASEADDR 0x43C20000
#define XPAR_AXI_UART16550_1_HIGHADDR 0x43C2FFFF
#define XPAR_AXI_UART16550_1_CLOCK_FREQ_HZ 100000000


/* Definitions for peripheral AXI_UART16550_2 */
#define XPAR_AXI_UART16550_2_DEVICE_ID 2
#define XPAR_AXI_UART16550_2_BASEADDR 0x43C30000
#define XPAR_AXI_UART16550_2_HIGHADDR 0x43C3FFFF
#define XPAR_AXI_UART16550_2_CLOCK_FREQ_HZ 100000000


/* Definitions for peripheral AXI_UART16550_3 */
#define XPAR_AXI_UART16550_3_DEVICE_ID 3
#define XPAR_AXI_UART16550_3_BASEADDR 0x43C40000
#define XPAR_AXI_UART16550_3_HIGHADDR 0x43C4FFFF
#define XPAR_AXI_UART16550_3_CLOCK_FREQ_HZ 100000000


/* Definitions for peripheral AXI_UART16550_4 */
#define XPAR_AXI_UART16550_4_DEVICE_ID 4
#define XPAR_AXI_UART16550_4_BASEADDR 0x43C60000
#define XPAR_AXI_UART16550_4_HIGHADDR 0x43C6FFFF
#define XPAR_AXI_UART16550_4_CLOCK_FREQ_HZ 100000000


/* Definitions for peripheral AXI_UART16550_5 */
#define XPAR_AXI_UART16550_5_DEVICE_ID 5
#define XPAR_AXI_UART16550_5_BASEADDR 0x43C70000
#define XPAR_AXI_UART16550_5_HIGHADDR 0x43C7FFFF
#define XPAR_AXI_UART16550_5_CLOCK_FREQ_HZ 100000000


/* Definitions for peripheral AXI_UART16550_6 */
#define XPAR_AXI_UART16550_6_DEVICE_ID 6
#define XPAR_AXI_UART16550_6_BASEADDR 0x43C80000
#define XPAR_AXI_UART16550_6_HIGHADDR 0x43C8FFFF
#define XPAR_AXI_UART16550_6_CLOCK_FREQ_HZ 100000000


/* Definitions for peripheral AXI_UART16550_7 */
#define XPAR_AXI_UART16550_7_DEVICE_ID 7
#define XPAR_AXI_UART16550_7_BASEADDR 0x43C90000
#define XPAR_AXI_UART16550_7_HIGHADDR 0x43C9FFFF
#define XPAR_AXI_UART16550_7_CLOCK_FREQ_HZ 100000000


/******************************************************************/

/* Canonical definitions for peripheral AXI_UART16550_0 */
#define XPAR_UARTNS550_0_DEVICE_ID 0
#define XPAR_UARTNS550_0_BASEADDR 0x43C10000
#define XPAR_UARTNS550_0_HIGHADDR 0x43C1FFFF
#define XPAR_UARTNS550_0_CLOCK_FREQ_HZ XPAR_AXI_UART16550_0_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_1 */
#define XPAR_UARTNS550_1_DEVICE_ID 1
#define XPAR_UARTNS550_1_BASEADDR 0x43C20000
#define XPAR_UARTNS550_1_HIGHADDR 0x43C2FFFF
#define XPAR_UARTNS550_1_CLOCK_FREQ_HZ XPAR_AXI_UART16550_1_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_2 */
#define XPAR_UARTNS550_2_DEVICE_ID 2
#define XPAR_UARTNS550_2_BASEADDR 0x43C30000
#define XPAR_UARTNS550_2_HIGHADDR 0x43C3FFFF
#define XPAR_UARTNS550_2_CLOCK_FREQ_HZ XPAR_AXI_UART16550_2_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_3 */
#define XPAR_UARTNS550_3_DEVICE_ID 3
#define XPAR_UARTNS550_3_BASEADDR 0x43C40000
#define XPAR_UARTNS550_3_HIGHADDR 0x43C4FFFF
#define XPAR_UARTNS550_3_CLOCK_FREQ_HZ XPAR_AXI_UART16550_3_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_4 */
#define XPAR_UARTNS550_4_DEVICE_ID 4
#define XPAR_UARTNS550_4_BASEADDR 0x43C60000
#define XPAR_UARTNS550_4_HIGHADDR 0x43C6FFFF
#define XPAR_UARTNS550_4_CLOCK_FREQ_HZ XPAR_AXI_UART16550_4_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_5 */
#define XPAR_UARTNS550_5_DEVICE_ID 5
#define XPAR_UARTNS550_5_BASEADDR 0x43C70000
#define XPAR_UARTNS550_5_HIGHADDR 0x43C7FFFF
#define XPAR_UARTNS550_5_CLOCK_FREQ_HZ XPAR_AXI_UART16550_5_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_6 */
#define XPAR_UARTNS550_6_DEVICE_ID 6
#define XPAR_UARTNS550_6_BASEADDR 0x43C80000
#define XPAR_UARTNS550_6_HIGHADDR 0x43C8FFFF
#define XPAR_UARTNS550_6_CLOCK_FREQ_HZ XPAR_AXI_UART16550_6_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_7 */
#define XPAR_UARTNS550_7_DEVICE_ID 7
#define XPAR_UARTNS550_7_BASEADDR 0x43C90000
#define XPAR_UARTNS550_7_HIGHADDR 0x43C9FFFF
#define XPAR_UARTNS550_7_CLOCK_FREQ_HZ XPAR_AXI_UART16550_7_CLOCK_FREQ_HZ


/******************************************************************/

/* Definitions for driver UARTPS */
#define XPAR_XUARTPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_UART_0 */
#define XPAR_PS7_UART_0_DEVICE_ID 0
#define XPAR_PS7_UART_0_BASEADDR 0xE0000000
#define XPAR_PS7_UART_0_HIGHADDR 0xE0000FFF
#define XPAR_PS7_UART_0_UART_CLK_FREQ_HZ 100000000
#define XPAR_PS7_UART_0_HAS_MODEM 0


/* Definitions for peripheral PS7_UART_1 */
#define XPAR_PS7_UART_1_DEVICE_ID 1
#define XPAR_PS7_UART_1_BASEADDR 0xE0001000
#define XPAR_PS7_UART_1_HIGHADDR 0xE0001FFF
#define XPAR_PS7_UART_1_UART_CLK_FREQ_HZ 100000000
#define XPAR_PS7_UART_1_HAS_MODEM 0


/******************************************************************/

/* Canonical definitions for peripheral PS7_UART_0 */
#define XPAR_XUARTPS_0_DEVICE_ID XPAR_PS7_UART_0_DEVICE_ID
#define XPAR_XUARTPS_0_BASEADDR 0xE0000000
#define XPAR_XUARTPS_0_HIGHADDR 0xE0000FFF
#define XPAR_XUARTPS_0_UART_CLK_FREQ_HZ 100000000
#define XPAR_XUARTPS_0_HAS_MODEM 0

/* Canonical definitions for peripheral PS7_UART_1 */
#define XPAR_XUARTPS_1_DEVICE_ID XPAR_PS7_UART_1_DEVICE_ID
#define XPAR_XUARTPS_1_BASEADDR 0xE0001000
#define XPAR_XUARTPS_1_HIGHADDR 0xE0001FFF
#define XPAR_XUARTPS_1_UART_CLK_FREQ_HZ 100000000
#define XPAR_XUARTPS_1_HAS_MODEM 0


/******************************************************************/

/* Definitions for driver USBPS */
#define XPAR_XUSBPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_USB_0 */
#define XPAR_PS7_USB_0_DEVICE_ID 0
#define XPAR_PS7_USB_0_BASEADDR 0xE0002000
#define XPAR_PS7_USB_0_HIGHADDR 0xE0002FFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_USB_0 */
#define XPAR_XUSBPS_0_DEVICE_ID XPAR_PS7_USB_0_DEVICE_ID
#define XPAR_XUSBPS_0_BASEADDR 0xE0002000
#define XPAR_XUSBPS_0_HIGHADDR 0xE0002FFF


/******************************************************************/

/* Definitions for driver WDTPS */
#define XPAR_XWDTPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_WDT_0 */
#define XPAR_PS7_WDT_0_DEVICE_ID 0
#define XPAR_PS7_WDT_0_BASEADDR 0xF8005000
#define XPAR_PS7_WDT_0_HIGHADDR 0xF8005FFF
#define XPAR_PS7_WDT_0_WDT_CLK_FREQ_HZ 111111115


/******************************************************************/

/* Canonical definitions for peripheral PS7_WDT_0 */
#define XPAR_XWDTPS_0_DEVICE_ID XPAR_PS7_WDT_0_DEVICE_ID
#define XPAR_XWDTPS_0_BASEADDR 0xF8005000
#define XPAR_XWDTPS_0_HIGHADDR 0xF8005FFF
#define XPAR_XWDTPS_0_WDT_CLK_FREQ_HZ 111111115


/******************************************************************/

/* Definitions for driver XADCPS */
#define XPAR_XADCPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_XADC_0 */
#define XPAR_PS7_XADC_0_DEVICE_ID 0
#define XPAR_PS7_XADC_0_BASEADDR 0xF8007100
#define XPAR_PS7_XADC_0_HIGHADDR 0xF8007120


/******************************************************************/

/* Canonical definitions for peripheral PS7_XADC_0 */
#define XPAR_XADCPS_0_DEVICE_ID XPAR_PS7_XADC_0_DEVICE_ID
#define XPAR_XADCPS_0_BASEADDR 0xF8007100
#define XPAR_XADCPS_0_HIGHADDR 0xF8007120


/******************************************************************/

/* Xilinx FAT File System Library (XilFFs) User Settings */
#define FILE_SYSTEM_INTERFACE_SD
