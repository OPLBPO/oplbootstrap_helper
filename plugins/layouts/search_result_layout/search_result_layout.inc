<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('OPL Search Result Layout'),
  'category' => t('OPL Bootstrap'),
  //'icon' => 'twocol_70_30_stacked.png',
  'theme' => 'search_result_layout',
  //'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'left' => t('Left'),
    'right' => t('Right'),
  ),
);