<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="testimonials-v3" style="padding: 0 0;">
        <ul class="list-unstyled owl-ts-v1">
          <?php foreach ($rows as $id => $row): ?>

            <li class="item">

            <?php print $row; ?>

            </li>

          <?php endforeach; ?>
        </ul>
</div>
<!-- End Testimonials v3 -->
<?php
  if (($library = libraries_load('owl-carousel')) && !empty($library['loaded'])) {
    drupal_add_js(drupal_get_path('module', 'viu_testimonial') . '/javascripts/owl-carousel.js',
      (array('type' => 'file', 'scope' => 'footer', 'weight' => 10)));
    drupal_add_js('jQuery(document).ready(function() {OwlCarousel.initOwlCarousel();});',
      (array('type' => 'inline', 'scope' => 'footer', 'weight' => 20)));
  }
  else {
    drupal_set_message($library['error message'] , 'error', FALSE);
  } ?>
