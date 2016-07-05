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
  <div class="container">
    <div class="row">
      <div class="col-md-8 col-md-offset-2">
        <ul class="list-unstyled owl-ts-v1">
          <?php foreach ($rows as $id => $row): ?>

            <li class="item">

            <?php print $row; ?>

            </li>

          <?php endforeach; ?>
        </ul>
      </div>
    </div>
  </div>
</div>
<!-- End Testimonials v3 -->
<?php libraries_load('owl-carousel')?>
<?php drupal_add_js(drupal_get_path('module', 'viu_testimonial') . '/javascripts/owl-carousel.js',
  (array('type' => 'file', 'scope' => 'footer', 'weight' => 10))); ?>
<?php drupal_add_js('jQuery(document).ready(function() {OwlCarousel.initOwlCarousel();});',
  (array('type' => 'inline', 'scope' => 'footer', 'weight' => 20))); ?>
