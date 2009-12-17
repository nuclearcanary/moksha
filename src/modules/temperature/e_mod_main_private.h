/*
 * vim:ts=8:sw=3:sts=8:noexpandtab:cino=>5n-3f0^-2{2
 */
#ifndef E_MOD_MAIN_PRIVATE_H
#define E_MOD_MAIN_PRIVATE_H

typedef enum _Sensor_Type
{
   SENSOR_TYPE_NONE,
   SENSOR_TYPE_FREEBSD,
   SENSOR_TYPE_OMNIBOOK,
   SENSOR_TYPE_LINUX_MACMINI,
   SENSOR_TYPE_LINUX_I2C,
   SENSOR_TYPE_LINUX_ACPI,
   SENSOR_TYPE_LINUX_PCI,
   SENSOR_TYPE_LINUX_PBOOK,
   SENSOR_TYPE_LINUX_INTELCORETEMP
} Sensor_Type;

#endif
