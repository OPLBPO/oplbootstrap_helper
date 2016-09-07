<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('OPL Feature Event Card Layout'),
  'category' => t('OPL Bootstrap'),
  //'icon' => 'twocol_70_30_stacked.png',
  'theme' => 'feature_event_card_layout',
  //'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left'),
    'right' => t('Right'),
  ),
);