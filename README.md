# UmVirt Linux kernel config file checker

ULFS version: 0.2.4

LFS version: 12.4

License: GPL

## About

Linux kernel is most important part of any GNU/Linux distribution.
Kernel is responsible for hardware interaction in most cases.
Almost all hardware drivers are part of kernel.

Linux is monolitic kernel. All drivers and options are defined in config file.
If config file have wrong options it not work properly.

Manual kernel configuration checking is slow. 

This utility is can be used to check kernel configuration.

## Installation

Run "make" command to build "cmp" binary and "config" folder.

## Usage

Put "config" file to "config" directory.
Run all checks with command:

        ./checkall

To run specific check use command:

        ./check %check_name%

To get checks names use command:

       ./check

Kernel config file can be found:

-  on "/boot" directory as file called "config*"
-  on Linux sources direcory (/usr/src/linux*) as file called ".config"

## Output

### Sample output

        CHECK: Linux From Scratch Systemd Edition 64-bit support (10.3)

        OK        CONFIG_PCI                              y                   y
        OK        CONFIG_IOMMU_SUPPORT                    y                   y
        OK        CONFIG_IRQ_REMAP                        y                   y
        OK        CONFIG_PCI_MSI                          y                   y
        FAIL      CONFIG_X86_X2APIC                       NULL                y

### Meaning

First row is check title.
Other rows are table rows. 
Each table row represent a specific kernel option.

Fields:

- Kernel option check result
- Kernel option name
- Kernel option value defined in config file
- Kernel option value expected by check

#### Kernel option values

Possible values:

- "y" means that option compiled in kernel
- "m" means that option compiled as module
- "NULL" means that option in undefined, don't have a value
- "text" means some text string as option value

