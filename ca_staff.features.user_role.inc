<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_staff_user_default_roles() {
  $roles = array();

  // Exported role: staff administrator
  $roles['staff administrator'] = array(
    'name' => 'staff administrator',
  );

  return $roles;
}
