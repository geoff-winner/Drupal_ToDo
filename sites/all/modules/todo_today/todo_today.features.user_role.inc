<?php
/**
 * @file
 * todo_today.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function todo_today_user_default_roles() {
  $roles = array();

  // Exported role: RegUser.
  $roles['RegUser'] = array(
    'name' => 'RegUser',
    'weight' => 4,
  );

  // Exported role: VIP.
  $roles['VIP'] = array(
    'name' => 'VIP',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
