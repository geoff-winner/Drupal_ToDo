<?php

/**
 * @file
 * Contains \Drupal\ds_test\Plugin\DsField\TestFieldNothing.
 */

namespace Drupal\ds_test\Plugin\DsField;

use Drupal\ds\Plugin\DsField\DsFieldBase;

/**
 * Test code field that returns nothing.
 *
 * @DsField(
 *   id = "test_field_nothing",
 *   title = @Translation("Test code field that returns nothing"),
 *   entity_type = "node"
 * )
 */
class TestFieldNothing extends DsFieldBase {

  /**
   * {@inheritdoc}
   */
  public function build() {
    return;
  }

}
