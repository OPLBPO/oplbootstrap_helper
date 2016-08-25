<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['left']): ?>
    <div class="search-result-image col-xs-12 col-sm-12 col-md-3">
      <div><?php print $content['left']; ?></div>
    </div>
  <?php endif ?>

  <?php if ($content['right']): ?>
    <div class="search-result-content col-xs-12 col-sm-12 col-md-9">
      <div><?php print $content['right']; ?></div>
    </div>
  <?php endif ?>
</div>