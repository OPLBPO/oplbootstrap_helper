<?php
/**
 * @file
 * oplbootstrap_helper.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function oplbootstrap_helper_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_panels_entity_panels_enabled';
  $strongarm->value = array(
    'node' => array(
      'event' => array(
        'teaser' => TRUE,
        'search_result' => TRUE,
      ),
      'blog' => array(
        'teaser' => TRUE,
        'search_result' => TRUE,
      ),
      'oplpage' => array(
        'teaser' => TRUE,
        'search_result' => TRUE,
      ),
      'landing_page' => array(
        'default' => TRUE,
      ),
      'featured_event' => array(
        'search_result' => TRUE,
        'featured_event' => TRUE,
      ),
      'database' => array(
        'search_result' => TRUE,
      ),
      'site_announcement' => array(
        'teaser' => TRUE,
      ),
      'board_meeting' => array(
        'search_result' => TRUE,
      ),
      'bookmobile_location' => array(
        'search_result' => TRUE,
      ),
      'branch_item' => array(
        'search_result' => TRUE,
      ),
      'branch_meeting_room' => array(
        'search_result' => TRUE,
      ),
      'forum' => array(
        'search_result' => TRUE,
      ),
      'frequently_asked_question' => array(
        'search_result' => TRUE,
      ),
      'help_guide' => array(
        'search_result' => TRUE,
      ),
      'kiosk_location' => array(
        'search_result' => TRUE,
      ),
      'mediaroom' => array(
        'search_result' => TRUE,
      ),
      'page' => array(
        'search_result' => TRUE,
      ),
      'policy' => array(
        'search_result' => TRUE,
      ),
      'webform' => array(
        'search_result' => TRUE,
      ),
      'external_event' => array(
        'teaser' => TRUE,
        'search_result' => TRUE,
      ),
      'audio' => array(
        'storybook' => TRUE,
      ),
      'instagram_feed' => array(
        'storybook' => TRUE,
      ),
      'recipe' => array(
        'storybook' => TRUE,
      ),
      'storybook_article' => array(
        'storybook' => TRUE,
      ),
      'storybook_collections' => array(
        'storybook' => TRUE,
      ),
      'storybook_video_intro' => array(
        'storybook' => TRUE,
      ),
      'video' => array(
        'storybook' => TRUE,
      ),
    ),
  );
  $export['entity_panels_entity_panels_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = '1.10';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.10';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_replace';
  $strongarm->value = TRUE;
  $export['jquery_update_replace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tabtamer_tab_settings';
  $strongarm->value = array(
    'node/%/webform' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results',
      'tabtamer_title' => '',
    ),
    'node/%/clone/%' => array(
      'weight' => '5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/clone/%clone_token',
      'tabtamer_title' => '',
    ),
    'node/%/revisions' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/revisions',
      'tabtamer_title' => '',
    ),
    'node/%/import' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/import',
      'tabtamer_title' => '',
    ),
    'node/%/delete-items' => array(
      'weight' => '11',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/delete-items',
      'tabtamer_title' => '',
    ),
    'node/%/unlock' => array(
      'weight' => '11',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/unlock',
      'tabtamer_title' => '',
    ),
    'node/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/view',
      'tabtamer_title' => '',
    ),
    'node/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/edit',
      'tabtamer_title' => '',
    ),
    'node/%/delete' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/delete',
      'tabtamer_title' => '',
    ),
    'node/%/convert' => array(
      'weight' => '6',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/convert',
      'tabtamer_title' => '',
    ),
    'node/%/node_export' => array(
      'weight' => '5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/node_export',
      'tabtamer_title' => '',
    ),
    'node/%/opening_hours' => array(
      'weight' => '3',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/opening_hours',
      'tabtamer_title' => '',
    ),
    'node/%/schedule' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/schedule',
      'tabtamer_title' => '',
    ),
    'node/%/update-http-links' => array(
      'weight' => '50',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/update-http-links',
      'tabtamer_title' => '',
    ),
    'node/%/strip-nbsp' => array(
      'weight' => '50',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/strip-nbsp',
      'tabtamer_title' => '',
    ),
    'node/%/registrations' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/registrations',
      'tabtamer_title' => '',
    ),
    'node/%/register' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/register',
      'tabtamer_title' => '',
    ),
    'node/%/reservations' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/reservations',
      'tabtamer_title' => '',
    ),
    'node/%/track' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/track',
      'tabtamer_title' => '',
    ),
    'node/%/translate' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/translate',
      'tabtamer_title' => '',
    ),
    'node/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/devel',
      'tabtamer_title' => '',
    ),
    'node/%/display' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/display',
      'tabtamer_title' => '',
    ),
    'node/%/moderation' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/moderation',
      'tabtamer_title' => '',
    ),
    'node/%/draft' => array(
      'weight' => '-9',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/draft',
      'tabtamer_title' => '',
    ),
    'node/%/panel_layout' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/panel_layout',
      'tabtamer_title' => '',
    ),
    'node/%/panel_content' => array(
      'weight' => '3',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/panel_content',
      'tabtamer_title' => '',
    ),
    'node/%/clone-freegal-to-collection' => array(
      'weight' => '50',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/clone-freegal-to-collection',
      'tabtamer_title' => '',
    ),
    'node/%/clone-zinio-to-collection' => array(
      'weight' => '50',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/clone-zinio-to-collection',
      'tabtamer_title' => '',
    ),
    'node/%/clone-hoopla-to-collection' => array(
      'weight' => '50',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/clone-hoopla-to-collection',
      'tabtamer_title' => '',
    ),
    'node/%/clone-browse-item-to-collection' => array(
      'weight' => '50',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/clone-browse-item-to-collection',
      'tabtamer_title' => '',
    ),
    'node/%/update-collection-image' => array(
      'weight' => '50',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/update-collection-image',
      'tabtamer_title' => '',
    ),
    'node/%/log' => array(
      'weight' => '12',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%views_arg/log',
      'tabtamer_title' => '',
    ),
    'node/%/webform/components' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/components',
      'tabtamer_title' => '',
    ),
    'node/%/webform/conditionals' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/conditionals',
      'tabtamer_title' => '',
    ),
    'node/%/webform/configure' => array(
      'weight' => '5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/configure',
      'tabtamer_title' => '',
    ),
    'node/%/webform/emails' => array(
      'weight' => '4',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/emails',
      'tabtamer_title' => '',
    ),
    'node/%/webform/validation' => array(
      'weight' => '3',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/validation',
      'tabtamer_title' => '',
    ),
    'node/%/webform/components/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/components/%webform_menu_component',
      'tabtamer_title' => '',
    ),
    'node/%/webform/components/%/clone' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/components/%webform_menu_component/clone',
      'tabtamer_title' => '',
    ),
    'node/%/webform/components/%/delete' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/components/%webform_menu_component/delete',
      'tabtamer_title' => '',
    ),
    'node/%/webform/emails/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/emails/%webform_menu_email',
      'tabtamer_title' => '',
    ),
    'node/%/webform/emails/%/clone' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/emails/%webform_menu_email/clone',
      'tabtamer_title' => '',
    ),
    'node/%/webform/emails/%/delete' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/emails/%webform_menu_email/delete',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/submissions' => array(
      'weight' => '4',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/submissions',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/analysis' => array(
      'weight' => '5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/analysis',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/table' => array(
      'weight' => '6',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/table',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/download' => array(
      'weight' => '7',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/download',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/clear' => array(
      'weight' => '8',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/clear',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/analysis/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/analysis/%webform_menu_component',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/analysis/%/more' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/analysis/%webform_menu_component/more',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/view' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/view',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/edit' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/edit',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/delete' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/delete',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/devel',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/devel/load',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/devel/token' => array(
      'weight' => '5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/devel/token',
      'tabtamer_title' => '',
    ),
    'node/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/devel/load',
      'tabtamer_title' => '',
    ),
    'node/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/devel/render',
      'tabtamer_title' => '',
    ),
    'node/%/moderation/view' => array(
      'weight' => '-1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/moderation/view',
      'tabtamer_title' => '',
    ),
    'node/%/moderation/diff' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/moderation/diff',
      'tabtamer_title' => '',
    ),
    'node/%/moderation/diff/list' => array(
      'weight' => '-1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/moderation/diff/list',
      'tabtamer_title' => '',
    ),
    'node/%/moderation/diff/view' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/moderation/diff/view',
      'tabtamer_title' => '',
    ),
    'charts/examples/built-in' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'charts/examples/built-in',
      'tabtamer_title' => '',
    ),
    'charts/examples/views' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'charts/examples/views',
      'tabtamer_title' => '',
    ),
    'comment/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%/view',
      'tabtamer_title' => '',
    ),
    'comment/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%comment/edit',
      'tabtamer_title' => '',
    ),
    'comment/%/delete' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%/delete',
      'tabtamer_title' => '',
    ),
    'comment/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%comment/devel',
      'tabtamer_title' => '',
    ),
    'comment/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%comment/devel/load',
      'tabtamer_title' => '',
    ),
    'comment/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%comment/devel/render',
      'tabtamer_title' => '',
    ),
    'booking/list' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'booking/list',
      'tabtamer_title' => '',
    ),
    'booking/manage/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'booking/manage/%opl_booking/edit',
      'tabtamer_title' => '',
    ),
    'booking/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'booking/%opl_booking/view',
      'tabtamer_title' => '',
    ),
    'booking/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'booking/%opl_booking/edit',
      'tabtamer_title' => '',
    ),
    'booking/%/delete' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'booking/%opl_booking/delete',
      'tabtamer_title' => '',
    ),
    'import/%/import' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'import/%feeds_importer/import',
      'tabtamer_title' => '',
    ),
    'import/%/delete-items' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'import/%feeds_importer/delete-items',
      'tabtamer_title' => '',
    ),
    'import/%/unlock' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'import/%feeds_importer/unlock',
      'tabtamer_title' => '',
    ),
    'import/%/log' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'import/%/log',
      'tabtamer_title' => '',
    ),
    'file/add/upload' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/add/upload',
      'tabtamer_title' => '',
    ),
    'file/add/web' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/add/web',
      'tabtamer_title' => '',
    ),
    'file/add/upload/file' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/add/upload/file',
      'tabtamer_title' => '',
    ),
    'file/add/upload/archive' => array(
      'weight' => '-5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/add/upload/archive',
      'tabtamer_title' => '',
    ),
    'file/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/view',
      'tabtamer_title' => '',
    ),
    'file/%/usage' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/usage',
      'tabtamer_title' => '',
    ),
    'file/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/edit',
      'tabtamer_title' => '',
    ),
    'file/%/delete' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/delete',
      'tabtamer_title' => '',
    ),
    'file/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/devel',
      'tabtamer_title' => '',
    ),
    'file/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/devel/load',
      'tabtamer_title' => '',
    ),
    'file/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/devel/render',
      'tabtamer_title' => '',
    ),
    'file/%/devel/token' => array(
      'weight' => '5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/devel/token',
      'tabtamer_title' => '',
    ),
    'user/%/imce' => array(
      'weight' => '10',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%user/imce',
      'tabtamer_title' => '',
    ),
    'user/%/bookings' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%user/bookings',
      'tabtamer_title' => '',
    ),
    'user/%/ill' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%user/ill',
      'tabtamer_title' => '',
    ),
    'user/%/registrations' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%user/registrations',
      'tabtamer_title' => '',
    ),
    'user/%/transactions' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%user/transactions',
      'tabtamer_title' => '',
    ),
    'user/%/scheduler' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%/scheduler',
      'tabtamer_title' => '',
    ),
    'user/%/track/navigation' => array(
      'weight' => '2',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%user/track/navigation',
      'tabtamer_title' => '',
    ),
    'user/%/view' => array(
      'weight' => '-10',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%user/view',
      'tabtamer_title' => '',
    ),
    'user/%/edit' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%user/edit',
      'tabtamer_title' => '',
    ),
    'user/%/devel' => array(
      'weight' => '100',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%user/devel',
      'tabtamer_title' => '',
    ),
    'user/%/display' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%user/display',
      'tabtamer_title' => '',
    ),
    'user/%/bookmarks' => array(
      'weight' => '0',
      'action' => 'hidden',
      'tabtamer_original_path' => 'user/%/bookmarks',
      'tabtamer_title' => '',
    ),
    'user/%/bookings-all' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%/bookings-all',
      'tabtamer_title' => 'Bookings and transactions',
    ),
    'user/%/edit/account' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user_category/edit/account',
      'tabtamer_title' => '',
    ),
    'user/%/edit/certifications' => array(
      'weight' => '3',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user_category/edit/certifications',
      'tabtamer_title' => '',
    ),
    'user/%/edit/main' => array(
      'weight' => '3',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user_category/edit/main',
      'tabtamer_title' => '',
    ),
    'user/%/edit/twitter' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/edit/twitter',
      'tabtamer_title' => '',
    ),
    'user/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/devel/load',
      'tabtamer_title' => '',
    ),
    'user/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/devel/render',
      'tabtamer_title' => '',
    ),
    'user/login' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/login',
      'tabtamer_title' => '',
    ),
    'user/register' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/register',
      'tabtamer_title' => '',
    ),
    'user/password' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/password',
      'tabtamer_title' => '',
    ),
    'locale/untranslated' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'locale/untranslated',
      'tabtamer_title' => '',
    ),
    'locale/translated' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'locale/translated',
      'tabtamer_title' => '',
    ),
    'registration/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'registration/%opl_registration/view',
      'tabtamer_title' => '',
    ),
    'reservation/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'reservation/%opl_reservation/view',
      'tabtamer_title' => '',
    ),
    'reservation/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'reservation/%opl_reservation/edit',
      'tabtamer_title' => '',
    ),
    'search/node' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/node',
      'tabtamer_title' => '',
    ),
    'search/node/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/node/%menu_tail',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/view' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/view',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/edit' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/edit',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/devel',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/display' => array(
      'weight' => '11',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/display',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/translate' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/translate',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/devel/load',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/devel/render',
      'tabtamer_title' => '',
    ),
    'forum/view' => array(
      'weight' => '-100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'forum/view',
      'tabtamer_title' => '',
    ),
    'forum/active' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'forum/active',
      'tabtamer_title' => '',
    ),
    'forum/active1' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'forum/active1',
      'tabtamer_title' => '',
    ),
    'forum/new' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'forum/new',
      'tabtamer_title' => '',
    ),
    'forum/unanswered' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'forum/unanswered',
      'tabtamer_title' => '',
    ),
    'about/contact/form/table' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'about/contact/form/table',
      'tabtamer_title' => '',
    ),
    'calendar-node-field-date-event/day' => array(
      'weight' => '3',
      'action' => 'enabled',
      'tabtamer_original_path' => 'calendar-node-field-date-event/day',
      'tabtamer_title' => '',
    ),
    'calendar-node-field-date-event/year' => array(
      'weight' => '4',
      'action' => 'enabled',
      'tabtamer_original_path' => 'calendar-node-field-date-event/year',
      'tabtamer_title' => '',
    ),
    'staff-events-calendar' => array(
      'weight' => 0,
      'action' => 'enabled',
      'tabtamer_original_path' => 'staff-events-calendar',
      'tabtamer_title' => '',
    ),
    'staff-events-calendar/week' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'staff-events-calendar/week',
      'tabtamer_title' => '',
    ),
    'staff-events-calendar/day' => array(
      'weight' => '3',
      'action' => 'enabled',
      'tabtamer_original_path' => 'staff-events-calendar/day',
      'tabtamer_title' => '',
    ),
    'staff-events-calendar/year' => array(
      'weight' => '4',
      'action' => 'enabled',
      'tabtamer_original_path' => 'staff-events-calendar/year',
      'tabtamer_title' => '',
    ),
  );
  $export['tabtamer_tab_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'oplbootstrap';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_oplbootstrap_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 0,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 0,
    'logo_path' => 'sites/all/themes/oplbootstrap/logo.png',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap__active_tab' => 'edit-components',
    'bootstrap_fluid_container' => 0,
    'bootstrap_button_size' => '',
    'bootstrap_button_colorize' => 1,
    'bootstrap_button_iconize' => 1,
    'bootstrap_forms_required_has_error' => 0,
    'bootstrap_forms_smart_descriptions' => 0,
    'bootstrap_forms_smart_descriptions_limit' => '250',
    'bootstrap_forms_smart_descriptions_allowed_tags' => 'b, code, em, i, kbd, span, strong',
    'bootstrap_image_shape' => '',
    'bootstrap_image_responsive' => 1,
    'bootstrap_table_bordered' => 0,
    'bootstrap_table_condensed' => 0,
    'bootstrap_table_hover' => 1,
    'bootstrap_table_striped' => 1,
    'bootstrap_table_responsive' => 1,
    'bootstrap_breadcrumb' => '0',
    'bootstrap_breadcrumb_home' => 1,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_pager_first_and_last' => 1,
    'bootstrap_region_well-util_nav' => '',
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-site_announcements' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-sidebar_first' => '',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-sub_footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_region_well-modal_oplusers_login' => '',
    'bootstrap_anchors_fix' => '0',
    'bootstrap_anchors_smooth_scrolling' => '0',
    'bootstrap_forms_has_error_value_toggle' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_trigger_autoclose' => 1,
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_toggle_jquery_error' => 0,
    'bootstrap_cdn_provider' => '',
    'bootstrap_cdn_custom_css' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/css/bootstrap.css',
    'bootstrap_cdn_custom_css_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/css/bootstrap.min.css',
    'bootstrap_cdn_custom_js' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/js/bootstrap.js',
    'bootstrap_cdn_custom_js_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.5/js/bootstrap.min.js',
    'bootstrap_cdn_jsdelivr_version' => '3.3.5',
    'bootstrap_cdn_jsdelivr_theme' => 'bootstrap',
  );
  $export['theme_oplbootstrap_settings'] = $strongarm;

  return $export;
}
