/*
 * Copyright (C) 2014       Citrix Systems UK Ltd.
 *
 * This work is licensed under the terms of the GNU GPL, version 2 or later.
 * See the COPYING file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "hw/xen/xen.h"
#include "qapi/qapi-commands-misc.h"

void xenstore_store_pv_console_info(int i, Chardev *chr)
{
}

int xen_pci_slot_get_pirq(PCIDevice *pci_dev, int irq_num)
{
    return -1;
}

void xen_piix3_set_irq(void *opaque, int irq_num, int level)
{
}

void xen_piix_pci_write_config_client(uint32_t address, uint32_t val, int len)
{
}

void xen_hvm_inject_msi(uint64_t addr, uint32_t data)
{
}

int xen_is_pirq_msi(uint32_t msi_data)
{
    return 0;
}

qemu_irq *xen_interrupt_controller_init(void)
{
    return NULL;
}

void xen_register_framebuffer(MemoryRegion *mr)
{
}

void xen_hvm_init(PCMachineState *pcms, MemoryRegion **ram_memory)
{
}

void qmp_xen_set_global_dirty_log(bool enable, Error **errp)
{
}
