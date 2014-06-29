/*
 * Copyright © 2013-2014  Rinat Ibragimov
 *
 * This file is part of FreshPlayerPlugin.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef FPP__CONFIG_H
#define FPP__CONFIG_H

#include <stdint.h>


struct fpp_config_s {
    int     audio_buffer_min_ms;
    int     audio_buffer_max_ms;
    int     xinerama_screen;
    char   *plugin_path;
    char   *flash_command_line;
    int     exp_enable_3d;
    struct {
        int   switch_buttons_2_3;
        int   dump_resource_histogram;
        int   plugin_missing;
    } quirks;
};

extern struct fpp_config_s config;

void
fpp_config_initialize(void);

void
fpp_config_destroy(void);

// plugin-specific
/** array of directories where plugin can be found */
const char **
fpp_config_get_plugin_path_list(void);

/** name of binary (without path) */
const char *
fpp_config_get_plugin_file_name(void);

/** default name of plugin to display on plugin list page */
const char *
fpp_config_get_plugin_name(void);

/** list of mime types in NPAPI format */
const char *
fpp_config_get_plugin_mime_type(void);

/** list of mime types in NPAPI format */
const char *
fpp_config_get_default_plugin_version(void);

/** default plugin description to display on plugin list page */
const char *
fpp_config_get_default_plugin_descr(void);

/** return full path to a plugin if set */
char *
fpp_config_get_plugin_path(void);

uintptr_t
fpp_config_plugin_has_manifest(void);


#endif // FPP__CONFIG_H