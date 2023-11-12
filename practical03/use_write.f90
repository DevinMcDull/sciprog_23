program printing
   implicit none
   integer (kind=4) :: i1 = 10, i2 = 200
   real (kind=4) :: fl1 = 1.11, fl2 = 2.2222

   write(6,'(a,i2,i4,a,f4.2,f7.4)') 'Tow ints', i1,i2, &
                                    'and tow floats', fl1, fl2
   stop
end program printing
