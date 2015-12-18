/**
 * @file
 * Custom scripts for viu_testimonial module.
 */

// Ensure the testimonial parent div is the size of the largest testimonial
(function ($) { $(document).ready(
    function(){
        var maxHeight = 0;

        $( '.testimonials .item' ).each(function( index ) {
            maxHeight = Math.max(maxHeight, $(this).height());
        });

        $( '.testimonials').height(maxHeight);
    });
})(jQuery);