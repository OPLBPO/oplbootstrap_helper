<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('OPL Branch Page Layout'),
  'category' => t('OPL Bootstrap'),
  'icon' => 'twocol_70_30_stacked.png',
  'theme' => 'branch_page_layout',
  //'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'branch-hours' => t('Hours'),
    'branch-tabs' => t('Library Tabs'),
    'branch-features' => t('Branch Features'),
    'branch-blog-posts' => t('Blog Posts'),
    'branch-quick-tabs' => t('Quick Tabs'),
    'bottom' => t('Bottom'),
  ),
);