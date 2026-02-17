#ifndef _RF_CONFIG_H
#define _RF_CONFIG_H

// New configuration options
#define RF_CONF_COREBOOT_BOOTSPLASH 500     // 500 ms before clearing Coreboot bootsplash
#define RF_CONF_OBSCURE_MODE 1              // Remove SeaBIOS branding for 'Security through obscurity'
#define RF_CONF_OBSCURE_BOOT_MENU_KEY 133   // 133 is F11
const char* rf_conf_obscure_bootmsg = "Waiting for boot menu combination...\n";
const char* rf_conf_obscure_welcome = "HOJUIX Bootloader 1.0.0\n\n"; // "Seabios (Version)" alternative

// Old configuration options moved from file-based config
#define RF_CONF_SHOW_BOOT_MENU 1            // etc/show-boot-menu
#define RF_CONF_BOOT_MENU_WAIT 1000         // etc/boot-menu-wait
#define RF_CONF_BOOT_MENU_KEY 1             // etc/boot-menu-key
const char* rf_conf_bootmsg = "Press ESC for boot menu.\n";


#endif
