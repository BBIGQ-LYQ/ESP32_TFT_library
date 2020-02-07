/*
 * spiffs VFS public function
 *
 * Author: LoBo (loboris@gmail.com / https://github.com/loboris)
 *
 * Part of this code is copied from or inspired by LUA-RTOS_ESP32 project:
 *
 * https://github.com/whitecatboard/Lua-RTOS-ESP32
 * IBEROXARXA SERVICIOS INTEGRALES, S.L. & CSS IBÉRICA, S.L.
 * Jaume Olivé (jolive@iberoxarxa.com / jolive@whitecatboard.org)
 *
 */
#ifndef _SPIFFS_VFS_H_
#define _SPIFFS_VFS_H_

#ifdef __cplusplus
extern "C" {
#endif

#define SPIFFS_BASE_PATH "/spiffs"

void vfs_spiffs_register();
int spiffs_mount();
int spiffs_unmount(int unreg);
void spiffs_fs_stat(uint32_t *total, uint32_t *used);
int get_spiffs_is_registered();
int get_spiffs_is_mounted();

#ifdef __cplusplus
}
#endif

#endif
