<?php
/**
 * Replaces the first occurrence of a string in a field
 *
 * @todo limit function to only work within the class attribute
 * @todo add error handling
 */

if (!function_exists("replace_css")) {
  function replace_css(&$field, $original, $new) {
    //Replace a portion of the css class
    $pos = strpos($field, $original);
    if ($pos !== FALSE) {
      $new_html_element = substr_replace($field, $new, $pos, strlen($original));
      return $new_html_element;
    }
  }
}
