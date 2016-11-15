<?php
/**
 * @file
 * oplbootstrap_helper.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oplbootstrap_helper_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function oplbootstrap_helper_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function oplbootstrap_helper_image_default_styles() {
  $styles = array();

  // Exported image style: blog_event_card_image.
  $styles['blog_event_card_image'] = array(
    'label' => 'blog/event card image',
    'effects' => array(
      18 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
      19 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 300,
          'height' => 150,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
