<?php
/**
 * @file
 * Plugin to check if the title has configured string.
 */
 
$plugin = array(
  'title' => t('Display About the Author'),
  'description' => t('Checks if About the Author field has been filled out.'),
  'callback' => 'oplbootstrap_helper_ctools_access_check',
  'default' => array('negate' => 0),
  'summary' => 'oplbootstrap_helper_ctools_access_summary',
  'settings form' => 'oplbootstrap_helper_ctools_access_settings',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);