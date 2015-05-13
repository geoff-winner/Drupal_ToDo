<?php
/**
 * @file
 * todo_today.features.inc
 */

/**
 * Implements hook_node_info().
 */
function todo_today_node_info() {
  $items = array(
    'todotoday_task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('Add a Task'),
      'has_title' => '1',
      'title_label' => t('Task'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
