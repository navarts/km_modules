<?php
/**
 * @file
 * km_qacontenttypes.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function km_qacontenttypes_node_info() {
  $items = array(
    'answer' => array(
      'name' => t('Answer'),
      'base' => 'node_content',
      'description' => t('An <em>Answer</em> to a <em>Question</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'question' => array(
      'name' => t('Question'),
      'base' => 'node_content',
      'description' => t('A <em>Question</em> which you\'re hoping to solicit peer feedback and <em>Answer</em>s for.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
