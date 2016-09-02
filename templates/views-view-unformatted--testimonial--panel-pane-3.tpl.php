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

<div class="margin-bottom-40">

  <div id="testimonials-1" class="carousel slide testimonials testimonials-v1" data-ride="carousel">
    <div class="carousel-inner">
      <?php foreach ($rows as $id => $row): ?>

        <?php if ($id == 0): ?>
          <div class="item active">
        <?php else: ?>
          <div class="item">
        <?php endif; ?>

        <?php print $row; ?>

        </div>

      <?php endforeach; ?>
    </div>
    <div class="carousel-arrow">
      <a class="left carousel-control" href="#testimonials-1" data-slide="prev">
        <i class="fa fa-angle-left"></i>
      </a>
      <a class="right carousel-control" href="#testimonials-1" data-slide="next">
        <i class="fa fa-angle-right"></i>
      </a>
    </div>
  </div>

</div>