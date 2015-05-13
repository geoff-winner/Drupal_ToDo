<?php
/**
 * @file
 * todo_today.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function todo_today_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_the-list:node/3
  $menu_links['main-menu_the-list:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'The List',
    'options' => array(
      'identifier' => 'main-menu_the-list:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('The List');


  return $menu_links;
}
