<?php
/**
 * Created by PhpStorm.
 * User: aubrey
 * Date: 6/28/16
 * Time: 10:34 AM
 */

if (!function_exists("replace_css")) {
  function replace_css(&$field) {
    //Replace the css class (and ONLY the css class)
    $replace_string = 'thumbnail';
    $pos = strpos($field, $replace_string);
    if ($pos !== FALSE) {
      $circular_image = substr_replace($field, 'rounded-x img-bordered', $pos, strlen($replace_string));
      return $circular_image;
    }
  }
}
