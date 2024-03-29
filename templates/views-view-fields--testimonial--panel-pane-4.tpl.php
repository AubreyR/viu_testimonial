<?php
/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php include_once (drupal_get_path('module', 'viu_testimonial') . '/php/helpers.php');
  // @todo This should probably be done in pre-render stage instead of modifying rendered code
  print replace_css($fields['field_featured_image']->content, 'testimonials-thumb', 'rounded-x img-bordered'); ?>

<div class="testimonials-v3-title">
  <p>
    <?php print $fields['title']->content; ?>

  </p>
  <span>
    <?php
      print $fields['field_viu_testimonial_program']->content;

      if (isset ($fields['field_viu_testimonial_year']->content)) {
      print ', ' . $fields['field_viu_testimonial_year']->content . ' year of studies';
      }

      if (isset ($fields['field_viu_testimonial_year_grad']->content)) {
      print ', graduated in' . ' ' . date('Y', strtotime($fields['field_viu_testimonial_year_grad']->content));
      }
    ?>
  </span>
</div>
<p>
  <?php print strip_tags($fields['body']->content, '<br>'); ?>
</p>


