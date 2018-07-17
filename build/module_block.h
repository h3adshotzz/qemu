/* AUTOMATICALLY GENERATED, DO NOT MODIFY */
/*
 * QEMU Block Module Infrastructure
 *
 * Authors:
 *  Marc Mari       <markmb@redhat.com>
 */

#ifndef QEMU_MODULE_BLOCK_H
#define QEMU_MODULE_BLOCK_H

#include "qemu-common.h"

static const struct {
    const char *format_name;
    const char *protocol_name;
    const char *library_name;
} block_driver_modules[] = {
    {
        .library_name = "curl",
        .format_name = "http",
        .protocol_name = "http",
    },
    {
        .library_name = "curl",
        .format_name = "https",
        .protocol_name = "https",
    },
    {
        .library_name = "curl",
        .format_name = "ftp",
        .protocol_name = "ftp",
    },
    {
        .library_name = "curl",
        .format_name = "ftps",
        .protocol_name = "ftps",
    },
};

#endif
