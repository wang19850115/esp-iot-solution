/*
 * SPDX-FileCopyrightText: 2022-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _IOT_LCD_ILI9342_H_
#define _IOT_LCD_ILI9342_H_

#include "screen_driver.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Initialize screen
 *
 * @param lcd_conf Pointer to a structure with lcd config arguments.
 * 
 * @return
 *      - ESP_OK on success
 *      - ESP_FAIL Driver not installed
 */
esp_err_t lcd_ili9342_init(const scr_controller_config_t *lcd_conf);

/**
 * @brief Deinitialize screen
 * 
 * @return
 *      - ESP_OK on success
 *      - ESP_FAIL Deinitialize failed
 *      - ESP_ERR_NOT_SUPPORTED unsupported
 */
esp_err_t lcd_ili9342_deinit(void);

/**
 * @brief Set screen direction of rotation
 *
 * @param dir Pointer to a scr_dir_t structure.
 * 
 * @return
 *      - ESP_OK on success
 *      - ESP_FAIL Failed
 */
esp_err_t lcd_ili9342_set_rotation(scr_dir_t dir);

/**
 * @brief Get screen information
 *
 * @param info Pointer to a scr_info_t structure.
 * 
 * @return
 *      - ESP_OK on success
 *      - ESP_FAIL Failed
 */
esp_err_t lcd_ili9342_get_info(scr_info_t *info);

/**
 * @brief Set screen window
 *
 * @param x0 Starting point in X direction
 * @param y0 Starting point in Y direction
 * @param x1 End point in X direction
 * @param y1 End point in Y direction
 * 
 * @return
 *      - ESP_OK on success
 *      - ESP_FAIL Failed
 */
esp_err_t lcd_ili9342_set_window(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1);

/**
 * @brief Set screen color invert
 * 
 * @param is_invert true: color invert on, false: color invert off
 * @return 
 *      - ESP_OK on success
 *      - ESP_FAIL Failed
 */
esp_err_t lcd_ili9342_set_invert(bool is_invert);

/**
 * @brief Write a RAM data
 * 
 * @param color New color of a pixel
 * 
 * @return 
 *      - ESP_OK on success
 *      - ESP_FAIL Failed
 */
esp_err_t lcd_ili9342_write_ram_data(uint16_t color);

/**
 * @brief Draw one pixel in screen with color
 * 
 * @param x X co-ordinate of set orientation
 * @param y Y co-ordinate of set orientation
 * @param color New color of the pixel
 * 
 * @return  
 *      - ESP_OK on success
 *      - ESP_FAIL Failed
 */
esp_err_t lcd_ili9342_draw_pixel(uint16_t x, uint16_t y, uint16_t color);

/**
 * @brief Fill the pixels on LCD screen with bitmap
 * 
 * @param x Starting point in X direction
 * @param y Starting point in Y direction
 * @param w width of image in bitmap array
 * @param h height of image in bitmap array
 * @param bitmap pointer to bitmap array
 * 
 * @return
 *      - ESP_OK on success
 *      - ESP_FAIL Failed
 */
esp_err_t lcd_ili9342_draw_bitmap(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t *bitmap);


#ifdef __cplusplus
}
#endif

#endif
