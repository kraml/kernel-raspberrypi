/*
 * linux/sound/rt5514.h -- Platform data for RT5514
 *
 * Copyright 2016 Realtek Semiconductor Corp.
 * Author: Oder Chiou <oder_chiou@xxxxxxxxxxx>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __LINUX_SND_RT5514_H
#define __LINUX_SND_RT5514_H

struct rt5514_platform_data {
	unsigned int dmic_init_delay;
};

#endif

