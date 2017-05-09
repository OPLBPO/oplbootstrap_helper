<?php
/**
 * @file
 * oplbootstrap_helper.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function oplbootstrap_helper_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_node_event_teaser__panel_context_88db325d-0dc4-494d-8d92-6aacf50a2c21';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-event-teaser';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Event Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'style' => 'default',
    'middle' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '56c7f9c6-b7b8-441f-97c5-301c21f77f3e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_node_event_teaser__panel_context_88db325d-0dc4-494d-8d92-6aacf50a2c21';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-949be7f4-8427-4285-ba8b-f9a7427cc9e3';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_category';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'event_card_subjects_new',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '949be7f4-8427-4285-ba8b-f9a7427cc9e3';
  $display->content['new-949be7f4-8427-4285-ba8b-f9a7427cc9e3'] = $pane;
  $display->panels['middle'][0] = 'new-949be7f4-8427-4285-ba8b-f9a7427cc9e3';
  $pane = new stdClass();
  $pane->pid = 'new-a8416f66-9dfa-4e38-8e10-cbcee39b7ae5';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_event';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'event_image_search_results_new',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'blog_event_card_image',
      'image_link' => '',
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a8416f66-9dfa-4e38-8e10-cbcee39b7ae5';
  $display->content['new-a8416f66-9dfa-4e38-8e10-cbcee39b7ae5'] = $pane;
  $display->panels['middle'][1] = 'new-a8416f66-9dfa-4e38-8e10-cbcee39b7ae5';
  $pane = new stdClass();
  $pane->pid = 'new-9ddafee5-0cdc-4257-a844-4b41379e1956';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => 'h3',
      'title_link' => 'content',
      'title_class' => '',
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9ddafee5-0cdc-4257-a844-4b41379e1956';
  $display->content['new-9ddafee5-0cdc-4257-a844-4b41379e1956'] = $pane;
  $display->panels['middle'][2] = 'new-9ddafee5-0cdc-4257-a844-4b41379e1956';
  $pane = new stdClass();
  $pane->pid = 'new-3d2371fa-270a-43f6-92c6-e6f8e7fc7898';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Event Branch',
    'title' => '',
    'body' => '<p class="card-location"><span><i class="fa fa-map-marker" aria-hidden="true"></i></span> %node:field-event-branch</p>
',
    'format' => 'newcomers_full_html',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3d2371fa-270a-43f6-92c6-e6f8e7fc7898';
  $display->content['new-3d2371fa-270a-43f6-92c6-e6f8e7fc7898'] = $pane;
  $display->panels['middle'][3] = 'new-3d2371fa-270a-43f6-92c6-e6f8e7fc7898';
  $pane = new stdClass();
  $pane->pid = 'new-7a52b3e4-6b9e-4db0-b40d-473ed6742061';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_event_dates';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'event_card_dates',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '7a52b3e4-6b9e-4db0-b40d-473ed6742061';
  $display->content['new-7a52b3e4-6b9e-4db0-b40d-473ed6742061'] = $pane;
  $display->panels['middle'][4] = 'new-7a52b3e4-6b9e-4db0-b40d-473ed6742061';
  $pane = new stdClass();
  $pane->pid = 'new-63c5bf12-cfbb-4bf1-9155-92f63bff15cc';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_series_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:event:field_series_1',
        'settings' => array(
          'field_series_1' => array(
            'en' => array(
              0 => array(
                'tid' => '1656',
              ),
              1 => array(
                'tid' => '1854',
              ),
              2 => array(
                'tid' => '1852',
              ),
              3 => array(
                'tid' => '1857',
              ),
              4 => array(
                'tid' => '1849',
              ),
              5 => array(
                'tid' => '1855',
              ),
              6 => array(
                'tid' => '1850',
              ),
              7 => array(
                'tid' => '1856',
              ),
              8 => array(
                'tid' => '1851',
              ),
              9 => array(
                'tid' => '1848',
              ),
              10 => array(
                'tid' => '1853',
              ),
              11 => array(
                'tid' => '1858',
              ),
            ),
          ),
          'field_series_1_tid' => array(
            0 => '1656',
            1 => '1854',
            2 => '1852',
            3 => '1857',
            4 => '1849',
            5 => '1855',
            6 => '1850',
            7 => '1856',
            8 => '1851',
            9 => '1848',
            10 => '1853',
            11 => '1858',
          ),
        ),
        'context' => 'argument_entity_panels_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'event_series_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'blog-tags',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '63c5bf12-cfbb-4bf1-9155-92f63bff15cc';
  $display->content['new-63c5bf12-cfbb-4bf1-9155-92f63bff15cc'] = $pane;
  $display->panels['middle'][5] = 'new-63c5bf12-cfbb-4bf1-9155-92f63bff15cc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-9ddafee5-0cdc-4257-a844-4b41379e1956';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_event_teaser__panel_context_88db325d-0dc4-494d-8d92-6aacf50a2c21'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function oplbootstrap_helper_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'opl_threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c51bdd40-1362-4aef-b898-0bedd80c31d3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8899d1c0-248c-4117-80c5-005f9120c1ff';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'opl_databases_new_';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 1,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => '%title',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8899d1c0-248c-4117-80c5-005f9120c1ff';
  $display->content['new-8899d1c0-248c-4117-80c5-005f9120c1ff'] = $pane;
  $display->panels['center'][0] = 'new-8899d1c0-248c-4117-80c5-005f9120c1ff';
  $pane = new stdClass();
  $pane->pid = 'new-79c4adf4-e7c8-44fa-9aa2-63fc70db65a0';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'taxonomy_terms_item_formats_front_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '900',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '79c4adf4-e7c8-44fa-9aa2-63fc70db65a0';
  $display->content['new-79c4adf4-e7c8-44fa-9aa2-63fc70db65a0'] = $pane;
  $display->panels['center'][1] = 'new-79c4adf4-e7c8-44fa-9aa2-63fc70db65a0';
  $pane = new stdClass();
  $pane->pid = 'new-a1587e70-d91e-4db3-a00c-6f1ab0b84b30';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'events_on_front_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '900',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a1587e70-d91e-4db3-a00c-6f1ab0b84b30';
  $display->content['new-a1587e70-d91e-4db3-a00c-6f1ab0b84b30'] = $pane;
  $display->panels['left'][0] = 'new-a1587e70-d91e-4db3-a00c-6f1ab0b84b30';
  $pane = new stdClass();
  $pane->pid = 'new-74a75c84-e509-4b39-b38f-7c3e204b3bf1';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'home_page_blog-blog_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '900',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '74a75c84-e509-4b39-b38f-7c3e204b3bf1';
  $display->content['new-74a75c84-e509-4b39-b38f-7c3e204b3bf1'] = $pane;
  $display->panels['right'][0] = 'new-74a75c84-e509-4b39-b38f-7c3e204b3bf1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
