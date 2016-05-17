<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('OPL Two Columns Stacked'),
  'category' => t('OPL Bootstrap'),
  'icon' => 'twocol_70_30_stacked.png',
  'theme' => 'twocol_70_30_stacked',
  //'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'bottom' => t('Bottom'),
  ),
);