<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('OPL Three Columns Stacked'),
  'category' => t('OPL Bootstrap'),
  'theme' => 'opl_threecol_25_50_25_stacked',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'center' => t('Center'),
    'right' => t('Right side'),
    'bottom' => t('Bottom'),
  ),
);