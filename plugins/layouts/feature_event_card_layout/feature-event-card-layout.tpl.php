<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top']): ?>
    <div class="search-result-image col-xs-12">
      <div><?php print $content['top']; ?></div>
    </div>
  <?php endif ?>

  <?php if ($content['left']): ?>
    <div class="col-xs-12 col-sm-12 col-md-8">
      <div><?php print $content['left']; ?></div>
    </div>
  <?php endif ?>

  <?php if ($content['right']): ?>
    <div class="col-xs-12 col-sm-12 col-md-4">
      <div><?php print $content['right']; ?></div>
    </div>
  <?php endif ?>
</div>